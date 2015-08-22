//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamOutputAsset.h"
#import "IGVideoRendererDelegate.h"

@class AVAsset, IGVideoClip, IGVideoInfo, IGVideoRenderer, NSString, UIImage;

@interface IGQuickCamOutputVideoAsset : NSObject <IGVideoRendererDelegate, IGQuickCamOutputAsset>
{
    UIImage *_displayImage;
    UIImage *_croppedImage;
    IGVideoInfo *_videoInfo;
    IGVideoRenderer *_renderer;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) IGVideoRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
- (void).cxx_destruct;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 metadata:(id)arg3 canceled:(BOOL)arg4;
- (void)renderVideo:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) AVAsset *avAsset;
- (int)devicePosition;
@property(readonly, nonatomic) IGVideoClip *clip;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
