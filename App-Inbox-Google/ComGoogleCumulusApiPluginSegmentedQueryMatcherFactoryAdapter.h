//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiPluginSegmentedQueryMatcherFactory.h"

@class NSString;

@interface ComGoogleCumulusApiPluginSegmentedQueryMatcherFactoryAdapter : NSObject <ComGoogleCumulusApiPluginSegmentedQueryMatcherFactory>
{
    id <ComGoogleCumulusApiPluginQueryMatcher> queryMatcher_;
}

- (void)dealloc;
- (id)createMatcherWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1 withJavaUtilCollection:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)initWithComGoogleCumulusApiPluginQueryMatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

