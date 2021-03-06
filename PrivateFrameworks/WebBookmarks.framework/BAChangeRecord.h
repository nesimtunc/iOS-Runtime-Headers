/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject  {
    WebBookmarkCollection *_collection;
    WebBookmark *_bookmark;
    int _changeType;
}

@property(readonly) WebBookmarkCollection * collection;
@property(readonly) WebBookmark * bookmark;
@property(readonly) int changeType;


- (id)description;
- (void)dealloc;
- (id)bookmark;
- (id)changeTypeDescription;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;
- (int)changeType;
- (id)collection;

@end
