/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSMutableArray, NSLock;

@interface SUScriptAccountManager : NSObject  {
    NSMutableArray *_accounts;
    NSLock *_lock;
}

@property(readonly) NSArray * accounts;

+ (id)beginAccountManagerSessionForObject:(id)arg1;
+ (void)endAccountManagerSessionForObject:(id)arg1;

- (void)_ntsReloadAccounts;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_accountsChangedNotification:(id)arg1;
- (id)accountForDSID:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)accounts;

@end
