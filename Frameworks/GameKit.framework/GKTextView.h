/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UILabel;

@interface GKTextView : UITextView  {
    UILabel *_placeholderLabel;
}

@property(retain) NSString * placeholderText;
@property UILabel * placeholderLabel;


- (id)placeholderText;
- (id)textAttributesForPlaceholder;
- (void)_gkTextViewDidChange;
- (void)setPlaceholderLabel:(id)arg1;
- (void)updatePlaceholderVisibility;
- (id)placeholderLabel;
- (void)setPlaceholderText:(id)arg1;
- (void)dealloc;
- (void)setText:(id)arg1;
- (void)layoutSubviews;

@end
