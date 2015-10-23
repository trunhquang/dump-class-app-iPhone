//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEAGLLayer;

@interface AFOpenGLView : UIView
{
    CAEAGLLayer *_eaglLayer;
    BOOL _transparentBacking;
    BOOL _shouldRegenerateRenderBuffer;
    unsigned int _colorRenderBuffer;
    struct CGSize _currentRenderbufferSize;
}

+ (Class)layerClass;
@property(nonatomic) BOOL shouldRegenerateRenderBuffer; // @synthesize shouldRegenerateRenderBuffer=_shouldRegenerateRenderBuffer;
@property(nonatomic) unsigned int colorRenderBuffer; // @synthesize colorRenderBuffer=_colorRenderBuffer;
@property(nonatomic) struct CGSize currentRenderbufferSize; // @synthesize currentRenderbufferSize=_currentRenderbufferSize;
@property(nonatomic) BOOL transparentBacking; // @synthesize transparentBacking=_transparentBacking;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)releaseRenderbufferAndCheckAgainstID:(unsigned int)arg1 removed:(char *)arg2;
- (unsigned int)getRenderBufferWithContext:(id)arg1;
- (void)prepareView;
- (id)initWithTransparentBacking:(BOOL)arg1;
- (id)init;

@end

