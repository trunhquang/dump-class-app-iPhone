//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFOverridable.h"

@class PSPDFStampAnnotation, PSPDFTextStampViewController;

@protocol PSPDFTextStampViewControllerDelegate <PSPDFOverridable>

@optional
- (void)textStampViewController:(PSPDFTextStampViewController *)arg1 didCreateAnnotation:(PSPDFStampAnnotation *)arg2;
@end

