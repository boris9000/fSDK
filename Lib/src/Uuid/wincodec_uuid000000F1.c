// Created file "Lib\src\Uuid\wincodec_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMILFormatConverter, 0x7e2a746f, 0x25c5, 0x4851, 0xb3, 0xaf, 0x44, 0x3b, 0x79, 0x63, 0x9e, 0xc0);

