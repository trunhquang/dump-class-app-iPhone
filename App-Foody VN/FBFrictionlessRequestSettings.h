//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRequestDelegate.h"

@class FBRequest, NSArray, NSString;

@interface FBFrictionlessRequestSettings : NSObject <FBRequestDelegate>
{
    NSArray *_allowedRecipients;
    FBRequest *_activeRequest;
    BOOL _enabled;
}

@property(retain, nonatomic) FBRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
@property(retain) NSArray *allowedRecipients; // @synthesize allowedRecipients=_allowedRecipients;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)dealloc;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)updateRecipientCacheWithRequestResult:(id)arg1;
- (BOOL)isFrictionlessEnabledForRecipients:(id)arg1;
- (BOOL)isFrictionlessEnabledForRecipient:(id)arg1;
- (void)updateRecipientCacheWithRecipients:(id)arg1;
@property(readonly, nonatomic) NSArray *recipientIDs;
- (void)reloadRecipientCacheWithFacebook:(id)arg1;
- (void)enableWithFacebook:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

