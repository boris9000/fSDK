// Created file "Lib\src\Uuid\X64\i_msfeeds"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXFeed2, 0xce528e77, 0x3716, 0x4eb7, 0x95, 0x6d, 0xf5, 0xe3, 0x75, 0x02, 0xe1, 0x2a);

