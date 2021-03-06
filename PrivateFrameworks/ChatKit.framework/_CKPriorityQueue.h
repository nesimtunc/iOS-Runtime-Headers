/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface _CKPriorityQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_serial_access_queue;
    NSMutableArray *_lowPriorityQueue;
    NSMutableArray *_normalPriorityQueue;
    NSMutableArray *_highPriorityQueue;
}

@property(retain) NSMutableArray * lowPriorityQueue;
@property(retain) NSMutableArray * normalPriorityQueue;
@property(retain) NSMutableArray * highPriorityQueue;


- (void)dealloc;
- (id)init;
- (unsigned int)count;
- (id)peekObject;
- (id)normalPriorityQueue;
- (id)highPriorityQueue;
- (id)lowPriorityQueue;
- (void)setHighPriorityQueue:(id)arg1;
- (void)setNormalPriorityQueue:(id)arg1;
- (void)setLowPriorityQueue:(id)arg1;
- (id)popObject;
- (void)pushObject:(id)arg1 withPriority:(int)arg2;

@end
