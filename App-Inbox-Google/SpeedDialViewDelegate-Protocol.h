//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SpeedDialView;

@protocol SpeedDialViewDelegate
- (void)speedDialViewDidSelectInvite:(SpeedDialView *)arg1;
- (void)speedDialViewDismiss:(SpeedDialView *)arg1;
- (void)speedDialView:(SpeedDialView *)arg1 didSelectContact:(id <JBTContactReference>)arg2;
- (void)speedDialViewDidSelectTask:(SpeedDialView *)arg1;
- (void)speedDialViewDidSelectCompose:(SpeedDialView *)arg1;
@end

