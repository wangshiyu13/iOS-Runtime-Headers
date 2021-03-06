/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSData;

@interface AWDNFCSECRSAuthorize : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int method : 1; 
        unsigned int status : 1; 
        unsigned int activated : 1; 
    BOOL _activated;
    NSData *_aid;
    } _has;
    unsigned int _method;
    unsigned int _status;
    unsigned long long _timeDeltaFromReference;
    unsigned long long _timestamp;
    NSData *_uuidReference;
}

@property BOOL activated;
@property(retain) NSData * aid;
@property BOOL hasActivated;
@property(readonly) BOOL hasAid;
@property BOOL hasMethod;
@property BOOL hasStatus;
@property BOOL hasTimeDeltaFromReference;
@property BOOL hasTimestamp;
@property(readonly) BOOL hasUuidReference;
@property unsigned int method;
@property unsigned int status;
@property unsigned long long timeDeltaFromReference;
@property unsigned long long timestamp;
@property(retain) NSData * uuidReference;

- (BOOL)activated;
- (id)aid;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActivated;
- (BOOL)hasAid;
- (BOOL)hasMethod;
- (BOOL)hasStatus;
- (BOOL)hasTimeDeltaFromReference;
- (BOOL)hasTimestamp;
- (BOOL)hasUuidReference;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)method;
- (BOOL)readFrom:(id)arg1;
- (void)setActivated:(BOOL)arg1;
- (void)setAid:(id)arg1;
- (void)setHasActivated:(BOOL)arg1;
- (void)setHasMethod:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimeDeltaFromReference:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)status;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
