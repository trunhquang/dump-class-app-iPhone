//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface UserBookingHistoryHeaderView : UIView
{
    UILabel *_numberLabel;
    UILabel *_resNameLabel;
    UILabel *_discountLabel;
    UILabel *_statusLabel;
}

+ (id)headerView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(nonatomic) __weak UILabel *resNameLabel; // @synthesize resNameLabel=_resNameLabel;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void).cxx_destruct;

@end

