// Created file "Lib\src\Uuid\i_ocmm"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IImageDecodeFilter, 0xa3ccedf3, 0x2de2, 0x11d0, 0x86, 0xf4, 0x00, 0xa0, 0xc9, 0x13, 0xf7, 0x50);

