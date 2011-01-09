/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventEditItemView, <SaveAndDismissDelegate>;



@interface CalendarEventEditItemViewController : CalendarBaseViewController 
{
    CalendarEventEditItemView *_contentView;
    float _height;
    <SaveAndDismissDelegate> *_delegate;
}


- (void)setHeight:(float)arg1;
- (void)setCalendarEventEditItemView:(id)arg1;
- (void)setEditModel:(id)arg1;
- (BOOL)isDirty;
- (id)item;
- (struct CGSize { float x1; float x2; })_sizeForViewInPopoverView;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)isEditing;
- (id)title;
- (id)view;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;

@end