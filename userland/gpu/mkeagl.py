#!/usr/bin/env python3
"""
mkeagl.py: makes eagl_gen.h for eagl.c.

  mkeagl.py eagl_slots.txt gl.xml eagl.c > eagl_gen.h

eagl_slots.txt: "OFFSET NAME" lines from slots_from_dylib.py (the stubs of iOS's OpenGLES: the offset each
gl* function has in the table EAGLContext -getMacroContextPrivate returns). On iOS 16.7.x the table has four
words before the context (the context is at 0x20): eagl.c's own numbering (and its table[0] = the context)
is that minus HEADER, so the header is made by eagl.c (struct eagl: hdr[4] before table[]).
gl.xml: Khronos's OpenGL-Registry (prototypes). eagl.c: which entries are written by hand (my_gl...), and which
gl* functions it calls itself.

Output: DECLARATIONS part: a pointer for every gl* function used (found through redwood_gl_proc(), so that the
library does not have to export them), and #define gl... for it. TABLE part: an entry for every slot that
eagl.c has not written by hand (counts the call, passes it on), eagl_slot_name(), eagl_fill_table().
"""
import re, sys
import xml.etree.ElementTree as ET

HEADER = 0x20   # the stubs of iOS 16.7 are 0x20 above the offsets CoreAnimation uses on the table of getMacroContextPrivate (that one is the context object + 0x20)
slots_file, xml_file, c_file = sys.argv[1:4]

slots = {}      # offset (eagl numbering) -> [names]
for line in open(slots_file):
    a, b = line.split()
    if a == '??':
        sys.exit("slot of %s unknown" % b)
    slots.setdefault(int(a, 16) - HEADER, []).append(b)

src = open(c_file).read()
by_hand = set(re.findall(r'^my_(gl\w+)\(void \*context', src, re.M))
used = set(re.findall(r'(?<![\w])(gl[A-Z]\w*)', src))

# prototypes
cmds = {}
for c in ET.parse(xml_file).getroot().iter('command'):
    proto = c.find('proto')
    if proto is None:
        continue
    name = proto.find('name').text
    ret = ''.join(t for t in proto.itertext()).replace(name, '', 1).strip()
    ps = []
    for p in c.findall('param'):
        n = p.find('name')
        typ = (p.text or '') + ''.join(
            (e.text or '') + (e.tail or '') for e in p if e is not n)
        typ = re.sub(r'\s+', ' ', typ).strip()
        if n.tail and n.tail.strip().startswith('['):
            typ += ' *'
        ps.append(typ)
    cmds.setdefault(name, (ret, ps))

known_types = set(re.findall(r'typedef [^;]*?\b(GL\w+)\s*;', src)) | set(
    x for m in re.findall(r'^typedef [^;]*;', src, re.M) for x in re.findall(r'\bGL\w+', m))
extra_types = {
    'GLint64EXT': 'int64_t', 'GLuint64EXT': 'uint64_t', 'GLcharARB': 'char', 'GLhandleARB': 'unsigned int',
    'GLhalfNV': 'unsigned short', 'GLintptrARB': 'long', 'GLsizeiptrARB': 'long', 'GLvdpauSurfaceNV': 'long',
    'GLDEBUGPROCARB': 'GLDEBUGPROC', 'GLDEBUGPROCAMD': 'void *', 'GLsync': None,
}

# the entries
entries = []    # (offset, names, chosen name or None)
for off in sorted(slots):
    names = slots[off]
    entries.append((off, names))

need = set(used)
for off, names in entries:
    if not any(n in by_hand for n in names):
        for n in names:
            if n in cmds:
                need.add(n)
                break
need = sorted(n for n in need if n in cmds)

def ctype(t):
    return t

types_used = set()
for n in need:
    ret, ps = cmds[n]
    for t in [ret] + ps:
        types_used.update(re.findall(r'\bGL\w+', t))
unknown = sorted(t for t in types_used if t not in known_types and t not in extra_types)
if unknown:
    sys.stderr.write("mkeagl: types not known to eagl.c: %s\n" % ' '.join(unknown))

out = []
w = out.append
w("/* eagl_gen.h: made by mkeagl.py from the stubs of iOS's OpenGLES (eagl_slots.txt) and Khronos's gl.xml. Not to be edited. */")
w("")
w("#ifdef EAGL_GEN_DECLARATIONS")
w("extern void (*redwood_gl_proc(const char *name))(void);")
for t in sorted(types_used):
    if t not in known_types and extra_types.get(t):
        w("typedef %s %s;" % (extra_types[t], t))
w("")
for n in need:
    ret, ps = cmds[n]
    w("static %s (*eagl_p_%s)(%s);" % (ret, n, ', '.join(ps) if ps else 'void'))
    w("#define %s eagl_p_%s" % (n, n))
w("")
w("static void")
w("eagl_load_functions(void)")
w("{")
for n in need:
    ret, ps = cmds[n]
    w("\teagl_p_%s = (%s (*)(%s))redwood_gl_proc(\"%s\");" % (n, ret, ', '.join(ps) if ps else 'void', n))
w("}")
w("#endif /* EAGL_GEN_DECLARATIONS */")
w("")
w("#ifdef EAGL_GEN_TABLE")
missing_names = []
table = []      # (offset, function name)
for off, names in entries:
    hand = [n for n in names if n in by_hand]
    if hand:
        table.append((off, 'my_' + hand[0]))
        continue
    gen = next((n for n in names if n in cmds), None)
    if gen is None:
        missing_names.append('/'.join(names))
        w("static long")
        w("eagl_gen_missing_%x(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)" % off)
        w("{")
        w("\treturn eagl_missing_raw(%#x, a0, a1, a2, a3);" % off)
        w("}")
        table.append((off, 'eagl_gen_missing_%x' % off))
        continue
    ret, ps = cmds[gen]
    params = ''.join(', %s a%d' % (t, i) for i, t in enumerate(ps))
    args = ', '.join('a%d' % i for i in range(len(ps)))
    w("static %s" % ret)
    w("eagl_gen_%s(void *context%s)" % (gen, params))
    w("{")
    w("\tstruct eagl *e = context;")
    void = ret == 'void'
    if not void:
        w("\t%s result;" % ret)
    w("\tif (eagl_p_%s == NULL) {" % gen)
    w("\t\t(void)eagl_missing(context, %#x);" % off)
    w("\t\treturn%s;" % ('' if void else ' (%s)0' % ret))
    w("\t}")
    w("\tEAGL_ENTER(e, %#x);" % off)
    w("\t%seagl_p_%s(%s);" % ('' if void else 'result = ', gen, args))
    w("\tEAGL_LEAVE(e, %#x);" % off)
    if not void:
        w("\treturn result;")
    w("}")
    w("")
    table.append((off, 'eagl_gen_' + gen))
# every other entry of the table gets a stub that says it was called (CoreAnimation calls entries that iOS's
# OpenGLES has no gl* name for): a NULL there is a crash at pc 0
SLOT_COUNT = 0x440
have = set(o for o, _ in table)
for off in range(8, SLOT_COUNT * 8, 8):
    if off not in have:
        w("static long eagl_gen_missing_%x(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3) { return eagl_missing_raw(%#x, a0, a1, a2, a3); }" % (off, off))
        table.append((off, 'eagl_gen_missing_%x' % off))
w("")
last = max(o for o, _ in table)
w("#define EAGL_TABLE_SIZE %#x" % (last + 8))
w("")
w("static const char *")
w("eagl_slot_name(unsigned offset)")
w("{")
w("\tswitch (offset) {")
for off, names in entries:
    w("\tcase %#x: return \"%s\";" % (off, '/'.join(names)))
w("\tdefault: return \"?\";")
w("\t}")
w("}")
w("")
w("/* the entries, at their offsets in eagl.c's numbering: the context is table[0] */")
w("static void")
w("eagl_fill_table(void **table)")
w("{")
w("\teagl_load_functions();")
for off, fn in table:
    w("\ttable[%#x] = (void *)%s;" % (off // 8, fn))
w("}")
w("#endif /* EAGL_GEN_TABLE */")
sys.stdout.write('\n'.join(out) + '\n')
sys.stderr.write("mkeagl: %d slots, %d by hand, %d generated, %d without a prototype%s; %d functions loaded\n" % (
    len(entries), sum(1 for o, f in table if f.startswith('my_')), sum(1 for o, f in table if f.startswith('eagl_gen_g')),
    len(missing_names), (': ' + ' '.join(missing_names)) if missing_names else '', len(need)))
