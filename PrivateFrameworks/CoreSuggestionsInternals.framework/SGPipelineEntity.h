/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSString;

@interface SGPipelineEntity : SGEntity {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct { 
        struct { 
            unsigned short bom; 
            unsigned short tag; 
        } _featureType; 
        BOOL hasInhumanHeaders; 
        BOOL inhumanEmailAddress; 
        BOOL inhumanAuthorName; 
        BOOL inhumanBody; 
        BOOL isTemplate; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct __DDResult { } *_dataDetectorsSignature;
    NSMutableDictionary *_emailToCanonicalEmailCache;
    NSMutableArray *_enrichments;
    BOOL _fullDownloadRequested;
    NSArray *_headers;
    unsigned int *_htmlOffsets;
    } _inhumanFeatures;
    NSString *_plainTextContentCache;
    BOOL _plainTextContentCacheGenerated;
    } _plainTextContentCacheLock;
    NSArray *_plainTextDetectedData;
    NSArray *_plainTextLines;
    NSIndexSet *_plainTextQuotedRegions;
    } _plainTextSigRange;
    NSIndexSet *_plainTextTabularRegions;
}

@property(readonly) NSArray * addresses;
@property(readonly) NSString * authorEmail;
@property struct __DDResult { }* dataDetectorsSignature;
@property(readonly) NSArray * emailAddresses;
@property(readonly) NSMutableDictionary * emailToCanonicalEmailCache;
@property(readonly) NSArray * enrichments;
@property(getter=hasFullDownloadBeenRequested,readonly) BOOL fullDownloadRequested;
@property(readonly) NSArray * headers;
@property(readonly) unsigned int* htmlOffsets;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; }* inhumanFeatures;
@property(readonly) NSArray * phoneNumbers;
@property(readonly) NSString * plainTextContent;
@property(retain) NSArray * plainTextDetectedData;
@property(readonly) NSArray * plainTextLines;
@property(retain) NSIndexSet * plainTextQuotedRegions;
@property struct _NSRange { unsigned int x1; unsigned int x2; } plainTextSigRange;
@property(retain) NSIndexSet * plainTextTabularRegions;

+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5;
+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5;

- (void).cxx_destruct;
- (void)addCuratedEmailAddress:(id)arg1;
- (void)addCuratedPhoneNumber:(id)arg1;
- (void)addCuratedPostalAddress:(id)arg1;
- (void)addDetectedEmailAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)addDetectedPhoneNumber:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)addDetectedPostalAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)addDetection:(id)arg1 forIdentity:(id)arg2;
- (void)addEnrichment:(id)arg1;
- (void)addParticipant:(id)arg1 type:(unsigned int)arg2;
- (void)addParticipants:(id)arg1 type:(unsigned int)arg2;
- (id)addresses;
- (id)authorEmail;
- (void)chopOffContentAfterIndex:(unsigned int)arg1;
- (void)chopOffContentBeforeIndex:(unsigned int)arg1;
- (id)contactDetailsWithType:(unsigned int)arg1;
- (struct __DDResult { }*)dataDetectorsSignature;
- (void)dealloc;
- (id)debugRegions;
- (id)description;
- (id)emailAddresses;
- (id)emailToCanonicalEmailCache;
- (id)enrichments;
- (void)enumeratePeople:(id)arg1;
- (void)enumeratePlainTextLines:(id)arg1;
- (BOOL)hasFullDownloadBeenRequested;
- (id)headers;
- (unsigned int*)htmlOffsets;
- (struct { struct { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; }*)inhumanFeatures;
- (id)init;
- (id)initPrivately;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned int)arg2 curated:(BOOL)arg3 parent:(id)arg4 value:(id)arg5 context:(id)arg6;
- (id)initWithCuratedContactWithABRecordID:(int)arg1 sourceKey:(id)arg2 name:(id)arg3 creationTimestamp:(id)arg4 lastModifiedTimestamp:(id)arg5 emailAddresses:(id)arg6 phoneNumbers:(id)arg7 postalAddresses:(id)arg8;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2;
- (id)initWithEmailMessage:(id)arg1 fromSource:(id)arg2;
- (id)initWithParent:(id)arg1;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (id)initWithSimpleCalendarEvent:(id)arg1 fromSource:(id)arg2;
- (BOOL)isInhuman;
- (BOOL)isPerson;
- (id)phoneNumbers;
- (id)plainTextContent;
- (id)plainTextDetectedData;
- (id)plainTextLines;
- (id)plainTextQuotedRegions;
- (struct _NSRange { unsigned int x1; unsigned int x2; })plainTextSigRange;
- (id)plainTextTabularRegions;
- (void)requestFullDownload;
- (void)setDataDetectorsSignature:(struct __DDResult { }*)arg1;
- (void)setPlainTextDetectedData:(id)arg1;
- (void)setPlainTextLines:(id)arg1 utf8Offsets:(id)arg2;
- (void)setPlainTextQuotedRegions:(id)arg1;
- (void)setPlainTextSigRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPlainTextTabularRegions:(id)arg1;
- (id)templateShortName;

@end
