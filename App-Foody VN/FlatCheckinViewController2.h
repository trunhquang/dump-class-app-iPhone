//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FlatPostReviewViewController2.h"

@class NSString;

@interface FlatCheckinViewController2 : FlatPostReviewViewController2
{
    NSString *postedActivityId;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)pushCheckInDetailVC:(id)arg1 checkinId:(id)arg2;
- (void)didTouchCancelCheckinButton:(id)arg1;
- (void)doPostNewCheckinAction;
- (void)didTouchCheckinButton:(id)arg1;
- (id)getDetailTextInputHeader;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
