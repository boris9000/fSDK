// Created file "Lib\src\Uuid\i_optary"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IOptionArray, 0x22b6d492, 0x0f88, 0x11d1, 0xba, 0x19, 0x00, 0xc0, 0x4f, 0xd9, 0x12, 0xd0);

