//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QTMCollectionViewInfoBar;

@protocol QTMCollectionViewInfoBarDelegate <NSObject>
- (void)updateControllerWithInfoBar:(QTMCollectionViewInfoBar *)arg1;

@optional
- (void)infoBar:(QTMCollectionViewInfoBar *)arg1 didDismissAnimated:(BOOL)arg2 didAutoDismiss:(BOOL)arg3;
- (void)infoBar:(QTMCollectionViewInfoBar *)arg1 willDismissAnimated:(BOOL)arg2 willAutoDismiss:(BOOL)arg3;
- (void)infoBar:(QTMCollectionViewInfoBar *)arg1 didShowAnimated:(BOOL)arg2 willAutoDismiss:(BOOL)arg3;
- (void)infoBar:(QTMCollectionViewInfoBar *)arg1 willShowAnimated:(BOOL)arg2 willAutoDismiss:(BOOL)arg3;
- (void)didPerformTapWithInfoBar:(QTMCollectionViewInfoBar *)arg1;
@end

