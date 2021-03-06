/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSHashTable, NSMapTable, NSObject<OS_dispatch_queue>;

@interface FigCaptureSessionObservatory : NSObject {
    NSMapTable *_captureSessionsStorage;
    long long _lastRunningIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_registeredObservers;
}

+ (void)initialize;
+ (id)sharedObservatory;

- (void)_registerObserver:(id)arg1;
- (void)_setRunning:(BOOL)arg1 forCaptureSession:(struct OpaqueFigCaptureSession { }*)arg2;
- (void)captureSessionWasCreated:(void*)arg1;
- (void)dealloc;
- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
