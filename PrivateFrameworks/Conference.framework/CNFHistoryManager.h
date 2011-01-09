/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSMutableDictionary;



@interface CNFHistoryManager : NSObject 
{
    NSMutableDictionary *_emailAddressHistory;
    NSMutableDictionary *_phoneNumberHistory;
}

+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (id)autorelease;
- (void)dealloc;
- (BOOL)havePreviouslyConferencedWithID:(id)arg1;
- (id)_fullPathToConferenceSupportDirectory;
- (id)_fullPathToConferenceHistoryPlist;
- (void)_reloadHistory;
- (void)_writeConferenceHistory;
- (void)setHavePreviouslyConferenced:(BOOL)arg1 withID:(id)arg2;

@end