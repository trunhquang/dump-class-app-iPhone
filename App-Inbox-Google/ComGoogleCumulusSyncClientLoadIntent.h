//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangInteger, NSString;

@interface ComGoogleCumulusSyncClientLoadIntent : NSObject
{
    NSString *description__;
    BOOL requiresAllStoredSlices_;
    BOOL localLoadOnly_;
    BOOL useImmediateDispatch_;
    id <ComGoogleCumulusCommonClientRetryPolicy> remoteRetryPolicy_;
    JavaLangInteger *priority_;
    NSString *spanId_;
    id <JavaUtilList> appExtensions_;
}

+ (void)initialize;
- (void)dealloc;
- (void)setUseImmediateDispatchWithBoolean:(BOOL)arg1;
- (BOOL)isUseImmediateDispatch;
- (id)description;
- (id)getAppExtensions;
- (id)addAppExtensionWithComGoogleCumulusCommonAppExtensionProto_AppExtension:(id)arg1;
- (id)getSpanId;
- (id)setSpanIdWithNSString:(id)arg1;
- (id)setRemoteRetryPolicyWithComGoogleCumulusCommonClientRetryPolicy:(id)arg1;
- (id)getRemoteRetryPolicy;
- (id)setLocalLoadOnlyWithBoolean:(BOOL)arg1;
- (BOOL)isLocalLoadOnly;
- (id)setRequiresAllStoredSlicesWithBoolean:(BOOL)arg1;
- (id)getPriority;
- (id)setPriorityWithInt:(int)arg1;
- (BOOL)isRequiresAllStoredSlices;
- (id)initWithNSString:(id)arg1;

@end

