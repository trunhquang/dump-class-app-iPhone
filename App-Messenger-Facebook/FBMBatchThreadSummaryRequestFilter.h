//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSSet;

@interface FBMBatchThreadSummaryRequestFilter : FBValueObject <NSCopying>
{
    NSSet *_singleThreadSummaryFilters;
}

@property(readonly, copy, nonatomic) NSSet *singleThreadSummaryFilters; // @synthesize singleThreadSummaryFilters=_singleThreadSummaryFilters;
- (void).cxx_destruct;
- (id)initWithSingleThreadSummaryFilters:(id)arg1;

@end
