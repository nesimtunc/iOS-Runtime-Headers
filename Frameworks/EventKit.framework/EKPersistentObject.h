/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSMutableSet, EKEventStore, NSMutableDictionary;

@interface EKPersistentObject : NSObject  {
    EKEventStore *_eventStore;
    id _objectID;
    struct __CFDictionary { } *_loadedProperties;
    NSMutableDictionary *_referencers;
    NSMutableSet *_dirtyProperties;
    unsigned int _flags;
    NSMutableDictionary *_committedProperties;
}

@property(readonly) EKEventStore * eventStore;
@property(retain) NSMutableDictionary * committedProperties;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)dirtyProperties;
- (void)reset;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)rollback;
- (id)objectID;
- (id)initCommon;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (id)dump;
- (void)setCommittedProperties:(id)arg1;
- (id)committedProperties;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDataValueForKey:(id)arg1;
- (void)primitiveSetUnboundedStringValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveUnboundedStringValueForKey:(id)arg1;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveDateValueForKey:(id)arg1;
- (void)primitiveSetBoolValue:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)primitiveBoolValueForKey:(id)arg1;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveNumberValueForKey:(id)arg1;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (BOOL)refreshExcludingProperties:(id)arg1;
- (BOOL)existsInStore;
- (BOOL)_areDefaultPropertiesLoaded;
- (BOOL)isPropertyLoaded:(id)arg1;
- (void)_fastpathSetProperty:(id)arg1 forKey:(id)arg2 isRelation:(BOOL)arg3;
- (id)_loadStringValueForKey:(id)arg1;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id)arg2;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (void)_addDirtyProperty:(id)arg1;
- (id)_loadChildIdentifiersForKey:(id)arg1;
- (void)_loadDefaultPropertiesIfNeeded;
- (BOOL)_loadRelationForKey:(id)arg1 value:(id*)arg2;
- (void)_removeReference:(id)arg1 forKey:(id)arg2;
- (void)_addReference:(id)arg1 forKey:(id)arg2;
- (BOOL)_shouldRetainPropertyForKey:(id)arg1;
- (void)_setDefaultPropertiesLoaded:(BOOL)arg1;
- (id)_relationForKey:(id)arg1;
- (void)changed;
- (id)_loadedPropertyKeys;
- (void)_releaseLoadedProperties;
- (void)_clearWeakRelations;
- (void)_clearReferences;
- (BOOL)isDirty;
- (void)unloadPropertyForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (BOOL)isPropertyDirty:(id)arg1;
- (void)saved;
- (BOOL)pushDirtyProperties:(id*)arg1;
- (BOOL)_isPendingUpdate;
- (BOOL)_isPendingDelete;
- (void)_takeValuesForDefaultProperties:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (void)takeValues:(id)arg1 forProperties:(id)arg2;
- (BOOL)_isPendingInsert;
- (BOOL)validate:(id*)arg1;
- (id)eventStore;
- (void)_setPendingDelete:(BOOL)arg1;
- (void)_setPendingUpdate:(BOOL)arg1;
- (void)_setPendingInsert:(BOOL)arg1;
- (BOOL)refresh;
- (BOOL)isNew;
- (void)_setEventStore:(id)arg1;
- (int)entityType;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (int)primitiveIntValueForKey:(id)arg1;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveURLValueForKey:(id)arg1;
- (id)primitiveStringValueForKey:(id)arg1;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;

@end
