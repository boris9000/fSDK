// Created file "Lib\src\Uuid\netfwv6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_NetFirewallV6Library, 0x3756d8ce, 0xb1f9, 0x4d95, 0x9e, 0x5f, 0xdf, 0x06, 0xdf, 0x4b, 0x49, 0x99);

