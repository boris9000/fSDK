// Created file "Lib\src\Uuid\scripteddiag_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IScriptedDiagnosticExecution, 0x6d5e9074, 0x62ef, 0x4f05, 0x90, 0x2a, 0x46, 0xec, 0xdf, 0xf1, 0xef, 0x68);

