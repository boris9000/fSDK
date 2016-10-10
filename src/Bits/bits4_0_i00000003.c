// Created file "Lib\src\Bits\bits4_0_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBitsTokenOptions, 0x9a2584c3, 0xf7d2, 0x457a, 0x9a, 0x5e, 0x22, 0xb6, 0x7b, 0xff, 0xc7, 0xd2);

DEFINE_GUID(IID_IBackgroundCopyFile4, 0xef7e0655, 0x7888, 0x4960, 0xb0, 0xe5, 0x73, 0x08, 0x46, 0xe0, 0x34, 0x92);

DEFINE_GUID(LIBID_BackgroundCopyManager4_0, 0xbb6df56a, 0xcace, 0x11dc, 0x99, 0x92, 0x00, 0x19, 0xb9, 0x3a, 0x3a, 0x84);

DEFINE_GUID(CLSID_BackgroundCopyManager4_0, 0xbb6df56b, 0xcace, 0x11dc, 0x99, 0x92, 0x00, 0x19, 0xb9, 0x3a, 0x3a, 0x84);
