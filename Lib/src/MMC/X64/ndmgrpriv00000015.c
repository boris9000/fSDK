// Created file "Lib\src\MMC\X64\ndmgrpriv"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMMCListView, 0x1b3c1392, 0xd68b, 0x11cf, 0x8c, 0x2b, 0x00, 0xaa, 0x00, 0x3c, 0xa9, 0xf6);

