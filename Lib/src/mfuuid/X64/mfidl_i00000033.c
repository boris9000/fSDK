// Created file "Lib\src\mfuuid\X64\mfidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFNetCredentialCache, 0x5b87ef6c, 0x7ed8, 0x434f, 0xba, 0x0e, 0x18, 0x4f, 0xac, 0x16, 0x28, 0xd1);

