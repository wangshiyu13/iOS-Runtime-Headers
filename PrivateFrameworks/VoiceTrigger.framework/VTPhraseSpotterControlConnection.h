/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class NSObject<OS_dispatch_queue>, NSString, VTPeerRemoteConnection;

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate> {
    VTPeerRemoteConnection *_peerConnection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _remotePhraseSpotterEnabled;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)remoteConnection:(id)arg1 handleMessageType:(unsigned int)arg2 completion:(id)arg3;
- (void)updateRemotePhraseSpotterEnabled:(BOOL)arg1;

@end
