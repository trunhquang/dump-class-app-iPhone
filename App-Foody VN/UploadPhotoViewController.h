//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FlatCheckinViewController2.h"

@class NSString;

@interface UploadPhotoViewController : FlatCheckinViewController2
{
    NSString *_activityId;
}

@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)pushCheckInDetailVC:(id)arg1;
- (void)setReviewPhotoFrame;
- (void)doUploadPhotoAction;
- (void)didTouchCancelUploadPhotoButton:(id)arg1;
- (void)didTouchUploadPhotoButton:(id)arg1;
- (void)trackPageView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

