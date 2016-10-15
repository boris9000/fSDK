// Created file "Lib\src\Uuid\hnclsid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_HomeNetAutoConfigService, 0x9a8ea3b5, 0x572e, 0x4cb3, 0x9e, 0xb9, 0xec, 0x68, 0x9a, 0xc5, 0x75, 0xae);
