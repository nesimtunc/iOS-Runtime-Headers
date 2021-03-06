/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSObject<OS_dispatch_queue>, CALayer, AVMediaDataRequester;

@interface AVSampleBufferDisplayLayerInternal : NSObject  {
    CALayer *contentLayer;
    struct OpaqueFigVideoQueue { } *videoQueue;
    BOOL controlTimebaseSetByUser;
    BOOL hasEnqueuedSamples;
    NSString *videoGravity;
    struct CGSize { 
        float width; 
        float height; 
    } presentationSize;
    BOOL isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    BOOL aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> *serialQueue;
}



@end
