//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NewCheckInDetailViewController.h"

@class NSString;

@interface NewUploadPhotoDetailViewController : NewCheckInDetailViewController
{
    NSString *_groupId;
}

@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)replaceUploadingPhotoName:(id)arg1 withObject:(id)arg2;
- (void)didTouchRetryUploadCheckinPhoto:(id)arg1;
- (void)didReceivedPhotoUploadFailureEvent:(id)arg1;
- (void)didReceivedPhotoUploadSuccessEvent:(id)arg1;
- (void)trackPageView;
- (void)didReceiveMemoryWarning;
- (void)setUpNavigationBar;
- (void)viewDidLoad;

@end
