//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry, NSString;

@protocol ComGoogleAppsBigtopDataItemsItemsProto_GetItemListResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getIsBackfillInProgress;
- (BOOL)hasIsBackfillInProgress;
- (BOOL)getHasMore;
- (BOOL)hasHasMore;
- (int)getItemListVersion;
- (BOOL)hasItemListVersion;
- (NSString *)getItemListId;
- (BOOL)hasItemListId;
- (ComGoogleAppsBigtopDataItemsItemsProto_ItemListEntry *)getEntryWithInt:(int)arg1;
- (id <JavaUtilList>)getEntryList;
- (int)getEntryCount;
@end

