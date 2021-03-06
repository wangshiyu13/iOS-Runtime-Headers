/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class FBSDisplay, FBSSceneClientSettingsDiff;

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {
    FBSSceneClientSettingsDiff *_clientSettings;
    FBSDisplay *_display;
}

@property(retain) FBSSceneClientSettingsDiff * clientSettingsDiff;
@property(retain) FBSDisplay * display;

- (id)clientSettingsDiff;
- (void)dealloc;
- (id)display;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setDisplay:(id)arg1;

@end
