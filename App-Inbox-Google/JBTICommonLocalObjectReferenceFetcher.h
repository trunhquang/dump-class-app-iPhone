//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonMultiObjectFetcher, JBTICommonSapiSpan_Factory;

@interface JBTICommonLocalObjectReferenceFetcher : NSObject
{
    JBTICommonMultiObjectFetcher *objectFetcher_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getAdaptor;
- (void)dealloc;
- (void)fetchWithComGoogleCumulusApiQuerySpec:(id)arg1 withComGoogleCumulusApiQuerySettings_PriorityEnum:(id)arg2 withJBTSpan:(id)arg3 withJBTICommonSapiCallback:(id)arg4;
- (id)initWithJBTICommonMultiObjectFetcher:(id)arg1 withJBTICommonSapiSpan_Factory:(id)arg2;

@end

