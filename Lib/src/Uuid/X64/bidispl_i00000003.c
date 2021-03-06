// Created file "Lib\src\Uuid\X64\bidispl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IBidiRequest, 0x8f348bd7, 0x4b47, 0x4755, 0x8a, 0x9d, 0x0f, 0x42, 0x2d, 0xf3, 0xdc, 0x89);

DEFINE_GUID(IID_IBidiRequestContainer, 0xd752f6c0, 0x94a8, 0x4275, 0xa7, 0x7d, 0x8f, 0x1d, 0x1a, 0x11, 0x21, 0xae);

DEFINE_GUID(IID_IBidiSpl, 0xd580dc0e, 0xde39, 0x4649, 0xba, 0xa8, 0xbf, 0x0b, 0x85, 0xa0, 0x3a, 0x97);

DEFINE_GUID(IID_IBidiSpl2, 0x0e8f51b8, 0x8273, 0x4906, 0x8e, 0x7b, 0xbe, 0x45, 0x3f, 0xfd, 0x2e, 0x2b);

DEFINE_GUID(LIBID_IBidiSplLib, 0x99147959, 0x6905, 0x46d6, 0xa7, 0x5f, 0xe0, 0x59, 0x4f, 0x01, 0x2b, 0x74);

DEFINE_GUID(CLSID_BidiRequest, 0xb9162a23, 0x45f9, 0x47cc, 0x80, 0xf5, 0xfe, 0x0f, 0xe9, 0xb9, 0xe1, 0xa2);

DEFINE_GUID(CLSID_BidiRequestContainer, 0xfc5b8a24, 0xdb05, 0x4a01, 0x83, 0x88, 0x22, 0xed, 0xf6, 0xc2, 0xbb, 0xba);

DEFINE_GUID(CLSID_BidiSpl, 0x2a614240, 0xa4c5, 0x4c33, 0xbd, 0x87, 0x1b, 0xc7, 0x09, 0x33, 0x16, 0x39);

