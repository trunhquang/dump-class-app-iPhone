//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSObject<GIPSlide>;

@protocol GIPSlidesViewDataSource
- (void)didRemoveSlideAtIndex:(unsigned int)arg1;
- (void)willRemoveSlideAtIndex:(unsigned int)arg1;
- (void)didAddSlideAtIndex:(unsigned int)arg1;
- (int)slideCount;
- (NSObject<GIPSlide> *)slideAtIndex:(unsigned int)arg1;
@end

