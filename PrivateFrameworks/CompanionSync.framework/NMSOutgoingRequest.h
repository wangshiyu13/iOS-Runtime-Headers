/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NMSMessageCenter, NSData, NSDictionary, NSString;

@interface NMSOutgoingRequest : NSObject <NMSObfuscatableDescriptionProviding> {
    NSData *_data;
    NSDictionary *_extraIDSOptions;
    NSString *_idsIdentifier;
    NMSMessageCenter *_messageCenter;
    unsigned short _messageID;
    id _pbRequest;
    NSDictionary *_persistentUserInfo;
    unsigned int _priority;
    double _responseTimeout;
    double _sendTimeout;
    BOOL _shouldEncrypt;
}

@property(retain) NSData * data;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSDictionary * extraIDSOptions;
@property(readonly) unsigned int hash;
@property(copy) NSString * idsIdentifier;
@property NMSMessageCenter * messageCenter;
@property unsigned short messageID;
@property(retain) id pbRequest;
@property(retain) NSDictionary * persistentUserInfo;
@property unsigned int priority;
@property double responseTimeout;
@property double sendTimeout;
@property BOOL shouldEncrypt;
@property(readonly) Class superclass;

+ (id)requestWithMessageID:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)data;
- (id)description;
- (id)extraIDSOptions;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)pbRequest;
- (id)persistentUserInfo;
- (unsigned int)priority;
- (double)responseTimeout;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setExtraIDSOptions:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setResponseTimeout:(double)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setShouldEncrypt:(BOOL)arg1;
- (BOOL)shouldEncrypt;

@end
