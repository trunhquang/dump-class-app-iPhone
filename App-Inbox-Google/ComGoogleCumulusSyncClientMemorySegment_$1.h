//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexIndexIterable.h"

@class ComGoogleCumulusSyncClientMemorySegment, NSString;

@interface ComGoogleCumulusSyncClientMemorySegment_$1 : NSObject <ComGoogleCumulusCommonIndexIndexIterable>
{
    ComGoogleCumulusSyncClientMemorySegment *this$0_;
    id val$normalizedToken_;
    id <JavaUtilList> val$entry_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientMemorySegment:(id)arg1 withId:(id)arg2 withJavaUtilList:(id)arg3;
- (id)createIterator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

