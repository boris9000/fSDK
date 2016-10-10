// Created file "Lib\src\CiUuid\query_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IColumnMapperCreator, 0x0b63e37b, 0x9ccc, 0x11d0, 0xbc, 0xdb, 0x00, 0x80, 0x5f, 0xcc, 0xce, 0x04);

DEFINE_GUID(IID_IColumnMapper, 0x0b63e37a, 0x9ccc, 0x11d0, 0xbc, 0xdb, 0x00, 0x80, 0x5f, 0xcc, 0xce, 0x04);

DEFINE_GUID(IID_IRowsetQueryStatus, 0xa7ac77ed, 0xf8d7, 0x11ce, 0xa7, 0x98, 0x00, 0x20, 0xf8, 0x00, 0x80, 0x24);

DEFINE_GUID(IID_IStemmer, 0xefbaf140, 0x7f42, 0x11ce, 0xbe, 0x57, 0x00, 0xaa, 0x00, 0x51, 0xfe, 0x20);

DEFINE_GUID(IID_IStemSink, 0xfe77c330, 0x7f42, 0x11ce, 0xbe, 0x57, 0x00, 0xaa, 0x00, 0x51, 0xfe, 0x20);

DEFINE_GUID(IID_IWordBreaker, 0xd53552c8, 0x77e3, 0x101a, 0xb5, 0x52, 0x08, 0x00, 0x2b, 0x33, 0xb0, 0xe6);

DEFINE_GUID(IID_IWordSink, 0xcc907054, 0xc058, 0x101a, 0xb5, 0x54, 0x08, 0x00, 0x2b, 0x33, 0xb0, 0xe6);

DEFINE_GUID(IID_IPhraseSink, 0xcc906ff0, 0xc058, 0x101a, 0xb5, 0x54, 0x08, 0x00, 0x2b, 0x33, 0xb0, 0xe6);

DEFINE_GUID(IID_ISearchQueryHits, 0xed8ce7e0, 0x106c, 0x11ce, 0x84, 0xe2, 0x00, 0xaa, 0x00, 0x4b, 0x99, 0x86);

