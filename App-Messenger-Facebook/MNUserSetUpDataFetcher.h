//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMUserFetcherDelegate.h"
#import "MNPhoneNumberSearchPrivacyOptionFetcherDelegate.h"

@class FBMUser, FBMUserFetcher, FBUserSession, MNPhoneNumberSearchPrivacyOptionFetcher, NSString;

@interface MNUserSetUpDataFetcher : NSObject <FBMUserFetcherDelegate, MNPhoneNumberSearchPrivacyOptionFetcherDelegate>
{
    id <MNUserSetUpDataFetcherDelegate> _delegate;
    FBMUserFetcher *_userFetcher;
    MNPhoneNumberSearchPrivacyOptionFetcher *_phoneNumberSearchPrivacyOptionFetcher;
    FBUserSession *_session;
    FBMUser *_user;
    id <FBProvider> _userFetcherProvider;
    double _fetchTimeout;
}

@property(retain, nonatomic) id <FBProvider> userFetcherProvider; // @synthesize userFetcherProvider=_userFetcherProvider;
@property(retain, nonatomic) FBMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MNPhoneNumberSearchPrivacyOptionFetcher *phoneNumberSearchPrivacyOptionFetcher; // @synthesize phoneNumberSearchPrivacyOptionFetcher=_phoneNumberSearchPrivacyOptionFetcher;
@property(retain, nonatomic) FBMUserFetcher *userFetcher; // @synthesize userFetcher=_userFetcher;
@property(nonatomic) double fetchTimeout; // @synthesize fetchTimeout=_fetchTimeout;
@property(nonatomic) __weak id <MNUserSetUpDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didFetchUser:(id)arg1 phoneNumberSearchPrivacyOption:(unsigned int)arg2;
- (void)_clearSearchPrivacyOptionFetcher;
- (void)_clearUserFetcher;
- (void)phoneNumberSearchPrivacyOptionFetcher:(id)arg1 didFetchOption:(unsigned int)arg2;
- (void)phoneNumberSearchPrivacyOptionFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)fetcher:(id)arg1 couldNotFetchUser:(id)arg2;
- (void)fetcher:(id)arg1 didFetchUser:(id)arg2;
- (void)stopUserDataFetching;
- (void)startUserDataFetching;
- (void)dealloc;
- (id)initWithSession:(id)arg1 userFetcherProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

