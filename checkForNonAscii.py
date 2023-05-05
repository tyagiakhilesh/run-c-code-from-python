import ctypes as CT

CLIB = CT.CDLL("./libcheckNonAscii.so")
CLIB.hasNonAsciiChars.argtypes = [CT.c_char_p]
filename = '/Users/akhilesht/work/repo/joplin/README.md'
filenameU8 = filename.encode("utf-8")
CLIB.hasNonAsciiChars(filenameU8)
