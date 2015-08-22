//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary, NSSet;

@interface FBMBatchThreadSummaryResponse : FBValueObject <NSCopying>
{
    NSDictionary *_singleFilterToThreadSummaryMapping;
    NSSet *_filtersWhoseThreadSummariesDoNotExist;
}

@property(readonly, copy, nonatomic) NSSet *filtersWhoseThreadSummariesDoNotExist; // @synthesize filtersWhoseThreadSummariesDoNotExist=_filtersWhoseThreadSummariesDoNotExist;
@property(readonly, copy, nonatomic) NSDictionary *singleFilterToThreadSummaryMapping; // @synthesize singleFilterToThreadSummaryMapping=_singleFilterToThreadSummaryMapping;
- (void).cxx_destruct;
- (id)initWithSingleFilterToThreadSummaryMapping:(id)arg1 filtersWhoseThreadSummariesDoNotExist:(id)arg2;

@end
