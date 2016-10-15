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

DEFINE_GUID(IID_IHeaderCtrlPrivate, 0x0b384311, 0x701b, 0x4e8a, 0xae, 0xc2, 0xda, 0x63, 0x21, 0xe2, 0x7a, 0xd2);
