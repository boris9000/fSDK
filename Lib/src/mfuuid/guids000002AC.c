// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFWMIGUID_ADJUST_SAMPLE_TIME_EVENT, 0x0b023f29, 0x00bc, 0x4f42, 0x91, 0x2f, 0x63, 0x22, 0x60, 0xfc, 0x87, 0x0d);

