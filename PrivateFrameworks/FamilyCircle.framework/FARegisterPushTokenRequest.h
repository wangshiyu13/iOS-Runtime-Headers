/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@class NSData;

@interface FARegisterPushTokenRequest : FAFamilyCircleRequest {
    NSData *_pushToken;
}

@property(copy,readonly) NSData * pushToken;

- (void).cxx_destruct;
- (id)initWithPushToken:(id)arg1;
- (id)pushToken;
- (void)startRequestWithCompletionHandler:(id)arg1;

@end
