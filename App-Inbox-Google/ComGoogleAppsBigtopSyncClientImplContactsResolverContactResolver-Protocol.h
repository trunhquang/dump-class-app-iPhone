//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTCContactRef;

@protocol ComGoogleAppsBigtopSyncClientImplContactsResolverContactResolver <NSObject, JavaObject>
- (void)resolveAsyncWithJBTCContactRef:(JBTCContactRef *)arg1 withJBTSpan:(id <JBTSpan>)arg2 withJBTICommonSapiCallback:(id <JBTICommonSapiCallback>)arg3;
- (id <JBTContact>)resolveWithJBTCContactRef:(JBTCContactRef *)arg1 withJBTSpan:(id <JBTSpan>)arg2 withJBTICommonSapiCallback:(id <JBTICommonSapiCallback>)arg3;
@end

