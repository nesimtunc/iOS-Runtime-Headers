/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSDictionary, QLPreviewParts;



@interface QLPreviewConverter : NSObject 
{
    QLPreviewParts *_previewParts;
    NSDictionary *_options;
}

@property(readonly) NSString *previewFileName;
@property(readonly) NSString *previewUTI;
@property(readonly) NSURLRequest *previewRequest;
@property(readonly) NSURLResponse *previewResponse;

+ (BOOL)canConvertDocumentType:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (BOOL)isSafeRequest:(id)arg1;

- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;
- (void)_register;
- (BOOL)isComputed;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)previewResponse;
- (id)previewFileName;
- (void)finishedAppendingData;
- (void)finishConverting;
- (id)previewUTI;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)previewRequest;
- (id)safeRequestForRequest:(id)arg1;
- (void)appendData:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (BOOL)isCancelled;

@end