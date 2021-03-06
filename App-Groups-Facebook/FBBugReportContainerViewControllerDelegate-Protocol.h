//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBBugReportCategory, NSString;

@protocol FBBugReportContainerViewControllerDelegate <NSObject>
- (void)resetNumReportAfterShakeOn;
- (void)incrementNumReportIfShakeOff;
- (void)resetNumCancelAfterShakeOff;
- (void)incrementNumCancelIfShakeOn;
- (void)dismissBugComposerAndStartVideoRecording;
- (void)dismissBugComposerAndAllowUserToTakeScreenshot;
- (void)presentPhotoPermissionsRequest;
- (void)willChangeCategory;
- (NSString *)bugDescription;
- (void)setBugDescription:(NSString *)arg1;
- (void)sendBugWithDescription:(NSString *)arg1 category:(NSString *)arg2 successBlock:(void (^)(id, id))arg3;
- (FBBugReportCategory *)chosenCategory;
- (void)setChosenCategory:(FBBugReportCategory *)arg1;
- (void)presentHelpCenterForGeneralFeedback;
- (void)presentHelpCenterForPrivacy;
- (void)presentHelpCenterForAbusiveContent;
- (void)sendGeneralFeedback:(NSString *)arg1 successBlock:(void (^)(id, id))arg2;
- (void)setShakeToReportDisabled;
- (void)setShakeToReportEnabled;
- (void)didDismissBugReportingFlow;
@end

