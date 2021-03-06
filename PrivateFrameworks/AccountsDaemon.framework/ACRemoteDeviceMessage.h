/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACAccount, NSData, NSDictionary, NSError, NSMutableDictionary, NSObject<NSCoding>, NSString;

@interface ACRemoteDeviceMessage : NSObject {
    NSData *_data;
    NSString *_identifier;
    BOOL _isReply;
    BOOL _needsReply;
    NSMutableDictionary *_payload;
}

@property(readonly) ACAccount * account;
@property(readonly) NSString * command;
@property(readonly) NSData * data;
@property(readonly) NSError * error;
@property(readonly) NSString * identifier;
@property BOOL isReply;
@property BOOL needsReply;
@property(readonly) NSDictionary * options;
@property(readonly) NSObject<NSCoding> * result;
@property(readonly) NSString * sentMessageIdentifier;
@property(readonly) BOOL success;

+ (id)actionMessageWithCommand:(id)arg1 account:(id)arg2 options:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
+ (id)replyForMessage:(id)arg1 withSuccess:(BOOL)arg2 result:(id)arg3 error:(id)arg4;

- (void).cxx_destruct;
- (void)_invalidateCachedData;
- (id)_payloadObjectForKey:(id)arg1;
- (void)_setPayloadObject:(id)arg1 forKey:(id)arg2;
- (id)account;
- (id)command;
- (id)data;
- (id)description;
- (id)error;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isReply;
- (BOOL)needsReply;
- (id)options;
- (id)result;
- (id)sentMessageIdentifier;
- (void)setIsReply:(BOOL)arg1;
- (void)setNeedsReply:(BOOL)arg1;
- (BOOL)success;

@end
