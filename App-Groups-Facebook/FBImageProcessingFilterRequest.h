//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBImageProcessingOpenGLRequest.h"

@class FBAnalytics, FBCPUImageFilterState, FBFilteredUIImageMetadata, NSArray, NSDictionary, UIImage;

@interface FBImageProcessingFilterRequest : FBImageProcessingOpenGLRequest
{
    NSArray *_filters;
    UIImage *_srcImage;
    FBAnalytics *_analytics;
    FBCPUImageFilterState *_cpuFilterState;
    FBFilteredUIImageMetadata *_cpuFilterMetadata;
    UIImage *_photoOverlayLayer;
    UIImage *_image;
    NSDictionary *_derivedContext;
}

@property(retain, nonatomic) NSDictionary *derivedContext; // @synthesize derivedContext=_derivedContext;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;
- (BOOL)canExecuteInBackground;
- (id)initWithImage:(id)arg1 gpuFilters:(id)arg2 cpuFilterState:(id)arg3 cpuFilterMetadata:(id)arg4 photoOverlayLayer:(id)arg5 derivedContext:(id)arg6 completionBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8 analytics:(id)arg9;
- (id)initWithImage:(id)arg1 gpuFilters:(id)arg2 cpuFilterState:(id)arg3 cpuFilterMetadata:(id)arg4 photoOverlayLayer:(id)arg5 derivedContext:(id)arg6 completionBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;
- (id)initWithImage:(id)arg1 gpuFilters:(id)arg2 derivedContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;

@end

