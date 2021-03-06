// Created file "Lib\src\Uuid\X64\i_htiface"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ITargetEmbedding, 0x548793c0, 0x9e74, 0x11cf, 0x96, 0x55, 0x00, 0xa0, 0xc9, 0x03, 0x49, 0x23);

