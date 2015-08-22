//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTEventListener.h"
#import "UITableViewDataSource.h"

@class NSIndexPath, Nugget;

@protocol ListDataSource <JBTEventListener, UITableViewDataSource>
@property(readonly, nonatomic) BOOL started;
@property(readonly, nonatomic) id <JBTItemList> items;
@property(nonatomic) __weak id <ListDataSourceDelegate> delegate;
- (void)sweepSection:(unsigned int)arg1;
- (void)start;
- (void)shutdown;
- (void)resume;
- (void)reloadCachedData;
- (void)pause;
- (void)markAsSeen;
- (void)markAsOpened;
- (id <JBTSection>)sectionAtSectionIndex:(int)arg1;
- (Nugget *)objectAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)indexPathForItemId:(id <JBTId>)arg1;
- (BOOL)canSweepForSection:(unsigned int)arg1;
@end

