//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplSurveysSurveysImpl_$3 : NSObject <JBTICommonSapiCallback>
{
    id <JBTICommonSapiSpan> val$sapiSpan_;
    id <JBTCallback> val$callback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTICommonSapiSpan:(id)arg1 withJBTCallback:(id)arg2;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

