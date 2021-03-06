/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface MessageCriterion : NSObject  {
    NSString *_uniqueId;
    NSString *_criterionIdentifier;
    NSString *_expression;
    int _qualifier;
    NSArray *_criteria;
    int _dateUnitType;
    NSString *_name;
    unsigned int _allCriteriaMustBeSatisfied : 1;
    unsigned int _dateIsRelative : 1;
    unsigned int _includeRelatedMessages : 1;
    int _type;
    NSArray *_requiredHeaders;
    BOOL _useFlaggedForUnreadCount;
}

@property BOOL useFlaggedForUnreadCount;
@property BOOL includeRelatedMessages;

+ (void)setTestAddressBook:(void*)arg1;
+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)flaggedMessageCriterion;
+ (id)VIPSenderMessageCriterion;
+ (void)_updateAddressComments:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)stringForCriterionType:(int)arg1;
+ (int)criterionTypeForString:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(BOOL)arg2;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)messageIsServerSearchResultCriterion:(BOOL)arg1;
+ (id)messageIsDeletedCriterion:(BOOL)arg1;
+ (id)criterionForMailboxURL:(id)arg1;

- (void)setName:(id)arg1;
- (id)name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setExpression:(id)arg1;
- (id)expression;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)criterionByAddingEmailCriteria;
- (id)SQLExpressionWithTables:(unsigned int*)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(BOOL)arg3;
- (id)criterionForSQL;
- (BOOL)includesCriterionSatisfyingPredicate:(int (*)())arg1 restrictive:(BOOL)arg2;
- (unsigned int)bestBaseTable;
- (id)SQLExpressionWithContext:(struct { unsigned int x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; }*)arg1 depth:(unsigned int)arg2;
- (BOOL)hasNumberCriterion;
- (id)_criterionForSQL;
- (id)criterionByExpandingAddressCriteria;
- (id)fixOnce;
- (BOOL)useFlaggedForUnreadCount;
- (void)setIncludeRelatedMessages:(BOOL)arg1;
- (BOOL)includeRelatedMessages;
- (id)emailAddressesForGroupCriterion;
- (void)setDateIsRelative:(BOOL)arg1;
- (BOOL)dateIsRelative;
- (void)setDateUnits:(int)arg1;
- (int)dateUnits;
- (BOOL)_evaluateIsEncryptedCriterion:(id)arg1;
- (BOOL)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (void)setUseFlaggedForUnreadCount:(BOOL)arg1;
- (id)simplifyOnce;
- (id)simplifiedCriterion;
- (BOOL)_evaluateAttachmentCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsLowCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsHighCriterion:(id)arg1;
- (BOOL)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (BOOL)_evaluateFullNameCriterion:(id)arg1;
- (BOOL)_evaluateAddressHistoryCriterion:(id)arg1;
- (BOOL)_evaluateDateCriterion:(id)arg1;
- (BOOL)_evaluateAccountCriterion:(id)arg1;
- (BOOL)_evaluateSenderHeaderCriterion:(id)arg1;
- (BOOL)_evaluateHeaderCriterion:(id)arg1;
- (BOOL)_evaluateAddressBookCriterion:(id)arg1;
- (BOOL)_evaluateFlagCriterion:(id)arg1;
- (BOOL)_evaluateCompoundCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (BOOL)doesMessageSatisfyCriterion:(id)arg1;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (id)_qualifierString;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)criteria;
- (int)qualifier;
- (id)criterionIdentifier;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (void)setQualifier:(int)arg1;
- (void)setCriterionType:(int)arg1;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(BOOL)arg2;
- (void)setCriterionIdentifier:(id)arg1;
- (id)initWithType:(int)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (void)setCriteria:(id)arg1;
- (BOOL)allCriteriaMustBeSatisfied;
- (int)criterionType;

@end
