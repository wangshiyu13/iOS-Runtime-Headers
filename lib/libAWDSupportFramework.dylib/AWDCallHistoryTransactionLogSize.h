/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryTransactionLogSize : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int records : 1; 
        unsigned int sizeBytes : 1; 
    } _has;
    unsigned int _records;
    unsigned int _sizeBytes;
    unsigned long long _timestamp;
}

@property BOOL hasRecords;
@property BOOL hasSizeBytes;
@property BOOL hasTimestamp;
@property unsigned int records;
@property unsigned int sizeBytes;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRecords;
- (BOOL)hasSizeBytes;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)records;
- (void)setHasRecords:(BOOL)arg1;
- (void)setHasSizeBytes:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setRecords:(unsigned int)arg1;
- (void)setSizeBytes:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)sizeBytes;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
