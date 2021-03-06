/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSOperationQueue : NSObject  {
    id _private;
    void *_reserved;
}

+ (id)currentQueue;
+ (id)mainQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setName:(id)arg1;
- (void)addOperationWithBlock:(id)arg1;
- (id)name;
- (id)description;
- (void)waitUntilAllOperationsAreFinished;
- (void)cancelAllOperations;
- (void)addOperation:(id)arg1;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)setSuspended:(BOOL)arg1;
- (unsigned int)operationCount;
- (id)operations;
- (BOOL)isSuspended;
- (void)setOvercommitsOperations:(BOOL)arg1;
- (BOOL)overcommitsOperations;
- (int)maxConcurrentOperationCount;
- (void)__:(id)arg1;
- (id)__;
- (void)executeAndWaitForBlock:(id)arg1;
- (void)addInvocation:(id)arg1;

@end
