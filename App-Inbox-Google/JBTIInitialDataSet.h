//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonCollectImmutableList, ComGoogleCumulusCommonCollectImmutableSet;

@interface JBTIInitialDataSet : NSObject
{
    ComGoogleCumulusCommonCollectImmutableList *threads_;
    ComGoogleCumulusCommonCollectImmutableSet *contacts_;
    ComGoogleCumulusCommonCollectImmutableSet *clusters_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)getClusters;
- (id)getContacts;
- (id)getThreads;
- (BOOL)isEmpty;
- (id)initWithComGoogleCumulusCommonCollectImmutableList:(id)arg1 withComGoogleCumulusCommonCollectImmutableSet:(id)arg2 withComGoogleCumulusCommonCollectImmutableSet:(id)arg3;

@end

