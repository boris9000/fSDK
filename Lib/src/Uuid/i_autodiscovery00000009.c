// Created file "Lib\src\Uuid\i_autodiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMailProtocolADEntry, 0x40ef8c68, 0xd554, 0x47ed, 0xaa, 0x37, 0xe5, 0xfb, 0x6b, 0xc9, 0x10, 0x75);

