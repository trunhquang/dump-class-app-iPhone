//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNFormHeaderView;

@protocol MNFormHeaderViewDelegate <NSObject>
- (void)formHeaderViewHideKeyboardButtonTapped:(MNFormHeaderView *)arg1;

@optional
- (void)formHeaderView:(MNFormHeaderView *)arg1 didChangeFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)formHeaderView:(MNFormHeaderView *)arg1 willChangeFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
@end
