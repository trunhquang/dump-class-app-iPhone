//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MailListDataSource.h"

@class NSMutableDictionary;

@interface SearchDataSource : MailListDataSource
{
    NSMutableDictionary *outstandingSearchSpans_;
    id <JBTSearchSession> searchSession_;
    id <SearchDataSourceDelegate> _searchDelegate;
}

+ (id)supportedOneBoxTypes;
@property(nonatomic) __weak id <SearchDataSourceDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)completeSpanWithVersion:(int)arg1;
- (void)handleEvent:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (void)sweepSection:(unsigned int)arg1;
- (void)start;
- (void)shutdown;
- (BOOL)canSweepForSection:(unsigned int)arg1;
- (void)markAsSeen;
- (void)markAsOpened;
- (id)startSearchSpan;
- (void)addSearchSpan:(id)arg1;
- (id)initWithSearchSession:(id)arg1;

@end

