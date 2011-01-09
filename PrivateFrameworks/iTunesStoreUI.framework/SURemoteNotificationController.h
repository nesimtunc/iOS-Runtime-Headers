/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, ISURLCache;



@interface SURemoteNotificationController : NSObject 
{
    NSInteger _enabledNotificationTypes;
    NSString *_registerFailureBagKey;
    NSString *_registerSuccessBagKey;
    ISURLCache *_soundFileURLCache;
}

@property(readonly) NSInteger enabledNotificationTypes;

+ (id)sharedInstance;

- (void)_accountsDidChangeNotification:(id)arg1;
- (void)_urlBagDidLoadNotification:(id)arg1;
- (void)_downloadSoundFileWithURL:(id)arg1 name:(id)arg2;
- (void)_reloadFromURLBag;
- (void)_reloadSoundFilesWithArray:(id)arg1;
- (void)_reloadWithClientConfiguration:(id)arg1;
- (id)_soundsDirectoryPath;
- (NSInteger)enabledNotificationTypes;
- (void)_memoryWarningNotification:(id)arg1;
- (void)handleNotificationDictionary:(id)arg1;
- (void)handleRegistrationFailureWithError:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (id)init;
- (void)dealloc;

@end