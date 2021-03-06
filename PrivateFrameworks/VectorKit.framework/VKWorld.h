/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKWorldDelegate>, VKModelObject;

@interface VKWorld : NSObject  {
    <VKWorldDelegate> *_delegate;
    VKModelObject *_modelRoot;
}

@property(readonly) VKModelObject * modelRoot;
@property <VKWorldDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)worldDisplayDidChange;
- (void)worldLayoutDidChange;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (id)modelRoot;

@end
