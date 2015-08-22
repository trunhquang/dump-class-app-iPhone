//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBComposerLoopsLogger : NSObject
{
    unsigned int _numberOfPhotosInLoop;
    unsigned int _numberOfTimesAddedPhotos;
    unsigned int _numberOfTimesCroppedPhotos;
    unsigned int _numberOfTimesDeletedAnImageByDragging;
    unsigned int _numberOfTimesDeletedAnImageByTapping;
    unsigned int _numberOfTimesDraggedAPhoto;
    unsigned int _numberOfTimesEnteredLoops;
    unsigned int _numberOfTimesMovedImage;
    unsigned int _numberOfTimesMovedSpeedSlider;
    unsigned int _numberOfTimesSelectedPhoto;
    unsigned int _numberOfTimesStabilizedPhotos;
    unsigned int _numberOfTimesTappedAddPhoto;
    unsigned int _numberOfTimesTappedStabilizeButtonOff;
    unsigned int _numberOfTimesTappedStabilizeButtonOn;
    unsigned int _numberOfTimesZoomedIntoAPhoto;
    float _finalSpeed;
    BOOL _showedLoopEntrance;
}

- (id)_stringForExitMethod:(int)arg1;
- (void)logLoopsDataWithLoopsWithComposerSessionID:(id)arg1 stillAttached:(BOOL)arg2 published:(BOOL)arg3 exitMethod:(int)arg4;
- (void)resetLogger;
- (void)showedLoopEntrance;
- (void)createdLoopWithNumberOfPhotos:(unsigned int)arg1;
- (void)enteredLoopFlow;
- (void)didZoomIntoPhoto;
- (void)didTapStabilizeButtonOn:(BOOL)arg1;
- (void)didTapAddPhoto;
- (void)didStabilizePhotos;
- (void)didSelectAPhoto;
- (void)didMoveAnImage;
- (void)didDragPhoto;
- (void)didDeleteAnImageByDragging:(BOOL)arg1;
- (void)didCropPhoto;
- (void)didChangeSpeed:(float)arg1;
- (void)didAddPhotos;

@end

