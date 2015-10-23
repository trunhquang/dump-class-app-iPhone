//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AlertManager : NSObject
{
    BOOL showingClientUpgrade;
    BOOL showingSessionExpire;
    NSString *_notificationURL;
    NSString *_trackerId;
    NSString *_notificationMsgId;
}

+ (id)getInstance;
@property(copy, nonatomic) NSString *notificationMsgId; // @synthesize notificationMsgId=_notificationMsgId;
@property(copy, nonatomic) NSString *trackerId; // @synthesize trackerId=_trackerId;
@property(copy, nonatomic) NSString *notificationURL; // @synthesize notificationURL=_notificationURL;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showClientSessionExpiredAlert;
- (void)showClientUpgradeRequiredAlertTitle:(id)arg1 message:(id)arg2;
- (void)showAlertInMainThreadWithTag:(int)arg1 title:(id)arg2 body:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (void)showAlertWithTag:(int)arg1 title:(id)arg2 body:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (id)init;

@end

