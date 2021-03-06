/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFixedSizeLRUCache : NSObject  {
    unsigned int _size;
    unsigned int _usedSlots;
    struct __CFArray { } *_lruQueue;
    struct __CFDictionary { } *_keyToObjectMapping;
}


- (void)invalidate;
- (void)dealloc;
- (void)_freeMemory:(id)arg1;
- (void)removeObjectWithKey:(id)arg1;
- (void)addObject:(id)arg1 withKey:(id)arg2;
- (id)initForCacheSize:(unsigned int)arg1;
- (id)objectWithKey:(id)arg1;

@end
