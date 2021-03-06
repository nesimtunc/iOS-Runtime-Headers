/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class UIView, NSString, <VKLabelMarkerDelegate>, UICalloutView, NSMutableArray, NSArray;

@interface VKLabelMarker : NSObject <VKCalloutSource> {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    } _tileKey;
    unsigned long long _businessID;
    NSString *_title;
    struct shared_ptr<vk::Label> { 
        struct Label {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _label;
    float _contentScale;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    struct { 
        double x0; 
        double x1; 
        double y0; 
        double y1; 
    } _bounds;
    NSMutableArray *_featureHandles;
    <VKLabelMarkerDelegate> *_delegate;
    BOOL _hasBusinessID;
    UICalloutView *_calloutView;
    NSString *_manifestIdentifier;
}

@property(readonly) NSString * title;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(readonly) struct { double x1; double x2; double x3; double x4; } bounds;
@property(readonly) NSString * manifestIdentifier;
@property(readonly) NSArray * featureHandles;
@property(retain) UICalloutView * calloutView;
@property(retain) UIView * leftCalloutAccessoryView;
@property(retain) UIView * rightCalloutAccessoryView;
@property(readonly) BOOL hasBusinessID;
@property(readonly) unsigned long long businessID;
@property(readonly) struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; } label;
@property <VKLabelMarkerDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; })label;
- (id)title;
- (struct { double x1; double x2; double x3; double x4; })bounds;
- (struct { double x1; double x2; })coordinate;
- (id)featureHandles;
- (id)manifestIdentifier;
- (BOOL)hasBusinessID;
- (unsigned long long)businessID;
- (BOOL)isOneWayArrow;
- (id)initWithFeature:(struct LabelFeature { int (**x1)(); struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { struct shared_ptr<vk::Label> {} *x_2_1_1; struct shared_ptr<vk::Label> {} *x_2_1_2; struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { struct shared_ptr<vk::Label> {} *x_3_2_1; } x_2_1_3; } x2; unsigned long long x3; unsigned long long x4; float x5; unsigned int x6; id x7; id x8; int x9; id x10; struct shared_ptr<const vk::LabelFeatureText> { struct LabelFeatureText {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct LabelFeatureTileData {} *x12; struct mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_13_1_1; } x13; struct LabelFeatureTileData {} *x14; int x15; boolx16; boolx17; boolx18; boolx19; }*)arg1 label:(const struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; }*)arg2 contentScale:(float)arg3;
- (id)calloutView;
- (id)rightCalloutAccessoryView;
- (id)leftCalloutAccessoryView;
- (id)debugAnchorPointString;
- (struct CGPoint { float x1; float x2; })screenPointToScrollRelativeToWithCanvasSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })calloutAnchorPointWithCanvasSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCalloutView:(id)arg1;
- (BOOL)isPOI;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)setRightCalloutAccessoryView:(id)arg1;

@end
