/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@class NSData, NSString, SPProtoCacheMessage;

@interface SPProtoSockPuppetObject : PBCodable <NSCopying> {
    struct { 
        unsigned int ndouble : 1; 
        unsigned int nint64 : 1; 
        unsigned int nuint64 : 1; 
        unsigned int nfloat : 1; 
        unsigned int nint32 : 1; 
        unsigned int nuint32 : 1; 
        unsigned int subtype : 1; 
        unsigned int nbool : 1; 
    SPProtoCacheMessage *_cacheMessage;
    } _has;
    NSString *_key;
    BOOL _nbool;
    double _ndouble;
    float _nfloat;
    int _nint32;
    long long _nint64;
    unsigned int _nuint32;
    unsigned long long _nuint64;
    NSData *_object;
    int _subtype;
    NSString *_text;
    int _type;
}

@property(retain) SPProtoCacheMessage * cacheMessage;
@property(readonly) BOOL hasCacheMessage;
@property(readonly) BOOL hasKey;
@property BOOL hasNbool;
@property BOOL hasNdouble;
@property BOOL hasNfloat;
@property BOOL hasNint32;
@property BOOL hasNint64;
@property BOOL hasNuint32;
@property BOOL hasNuint64;
@property(readonly) BOOL hasObject;
@property BOOL hasSubtype;
@property(readonly) BOOL hasText;
@property(retain) NSString * key;
@property BOOL nbool;
@property double ndouble;
@property float nfloat;
@property int nint32;
@property long long nint64;
@property unsigned int nuint32;
@property unsigned long long nuint64;
@property(retain) NSData * object;
@property int subtype;
@property(retain) NSString * text;
@property int type;

- (void).cxx_destruct;
- (id)cacheMessage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCacheMessage;
- (BOOL)hasKey;
- (BOOL)hasNbool;
- (BOOL)hasNdouble;
- (BOOL)hasNfloat;
- (BOOL)hasNint32;
- (BOOL)hasNint64;
- (BOOL)hasNuint32;
- (BOOL)hasNuint64;
- (BOOL)hasObject;
- (BOOL)hasSubtype;
- (BOOL)hasText;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (BOOL)nbool;
- (double)ndouble;
- (float)nfloat;
- (int)nint32;
- (long long)nint64;
- (unsigned int)nuint32;
- (unsigned long long)nuint64;
- (id)object;
- (BOOL)readFrom:(id)arg1;
- (void)setCacheMessage:(id)arg1;
- (void)setHasNbool:(BOOL)arg1;
- (void)setHasNdouble:(BOOL)arg1;
- (void)setHasNfloat:(BOOL)arg1;
- (void)setHasNint32:(BOOL)arg1;
- (void)setHasNint64:(BOOL)arg1;
- (void)setHasNuint32:(BOOL)arg1;
- (void)setHasNuint64:(BOOL)arg1;
- (void)setHasSubtype:(BOOL)arg1;
- (void)setKey:(id)arg1;
- (void)setNbool:(BOOL)arg1;
- (void)setNdouble:(double)arg1;
- (void)setNfloat:(float)arg1;
- (void)setNint32:(int)arg1;
- (void)setNint64:(long long)arg1;
- (void)setNuint32:(unsigned int)arg1;
- (void)setNuint64:(unsigned long long)arg1;
- (void)setObject:(id)arg1;
- (void)setSubtype:(int)arg1;
- (void)setText:(id)arg1;
- (void)setType:(int)arg1;
- (int)subtype;
- (id)text;
- (int)type;
- (void)writeTo:(id)arg1;

@end
