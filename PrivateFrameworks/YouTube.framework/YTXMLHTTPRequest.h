/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest  {
    NSMutableURLRequest *_deferredRequest;
    BOOL _needsAccountAuth;
}

@property BOOL needsAccountAuth;


- (void)dealloc;
- (void)loadRequest:(id)arg1;
- (void)listenForAuthenticationNotifications:(BOOL)arg1;
- (void)failedToAuthenticate:(id)arg1;
- (void)setNeedsAccountAuth:(BOOL)arg1;
- (void)didAuthenticate:(id)arg1;
- (BOOL)needsAccountAuth;

@end
