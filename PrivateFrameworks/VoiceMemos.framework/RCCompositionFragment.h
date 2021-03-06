/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSString, NSURL;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {
    struct { 
        double beginTime; 
        double endTime; 
    struct { 
        double beginTime; 
        double endTime; 
    NSURL *_AVOutputURL;
    double _contentDuration;
    } _timeRangeInComposition;
    } _timeRangeInContentToUse;
}

@property(retain) NSURL * AVOutputURL;
@property double contentDuration;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property struct { double x1; double x2; } timeRangeInComposition;
@property struct { double x1; double x2; } timeRangeInContentToUse;
@property(readonly) NSURL * waveformURL;

- (void).cxx_destruct;
- (id)AVOutputURL;
- (double)contentDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteFromFilesystem;
- (id)description;
- (id)dictionaryPListRepresentation;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1;
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(struct { double x1; double x2; })arg1;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(struct { double x1; double x2; })arg3 timeRangeInComposition:(struct { double x1; double x2; })arg4;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (void)moveAssetsToFragment:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAVOutputURL:(id)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setTimeRangeInComposition:(struct { double x1; double x2; })arg1;
- (void)setTimeRangeInContentToUse:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })timeRangeInComposition;
- (struct { double x1; double x2; })timeRangeInContentToUse;
- (id)waveformURL;

@end
