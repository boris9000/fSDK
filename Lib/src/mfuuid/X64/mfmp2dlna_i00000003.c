// Created file "Lib\src\mfuuid\X64\mfmp2dlna_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMFDLNASinkInit, 0x0c012799, 0x1b61, 0x4c10, 0xbd, 0xa9, 0x04, 0x44, 0x5b, 0xe5, 0xf5, 0x61);

