/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class TableViewManager, NSString;

@interface RecommendationActionController : NSObject  {
    NSString *sectionIdentifier;
    NSString *actionKey;
    TableViewManager *tableManager;
}

@property(retain) NSString * sectionIdentifier;
@property(retain) NSString * actionKey;
@property TableViewManager * tableManager;

+ (id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2;

- (void)setSectionIdentifier:(id)arg1;
- (id)sectionIdentifier;
- (id)actionKey;
- (void)setActionKey:(id)arg1;
- (void)setTableManager:(id)arg1;
- (void)selectPrimaryRecommendation;
- (id)getSectionInfo;
- (BOOL)isPrimaryRecommendation;
- (id)tableManager;

@end
