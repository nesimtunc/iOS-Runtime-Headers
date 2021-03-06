/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
    AVMediaFileType *_fileType;
}

@property(readonly) AVMediaFileType * fileType;

+ (void)initialize;
+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)fileType;
- (BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2;
- (BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2;
- (id)initWithFileType:(id)arg1;

@end
