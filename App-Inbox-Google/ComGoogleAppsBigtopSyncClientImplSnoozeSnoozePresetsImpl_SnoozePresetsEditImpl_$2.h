//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl_SnoozePresetsEditImpl, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl_SnoozePresetsEditImpl_$2 : NSObject <JBTICommonSapiCallback>
{
    ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl_SnoozePresetsEditImpl *this$0_;
    id <JBTICommonSapiSpan> val$saveSpan_;
    id <JBTCallback> val$callback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl_SnoozePresetsEditImpl:(id)arg1 withJBTICommonSapiSpan:(id)arg2 withJBTCallback:(id)arg3;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

