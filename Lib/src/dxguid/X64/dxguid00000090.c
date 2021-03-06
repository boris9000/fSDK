// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DirectDrawSurfaceStream, 0xe043bc46, 0x5317, 0x11d1, 0x8c, 0x4d, 0x00, 0xc0, 0x4f, 0xd9, 0x30, 0xc5);

