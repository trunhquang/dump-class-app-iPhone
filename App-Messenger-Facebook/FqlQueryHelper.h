//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FqlQueryHelper : NSObject
{
}

+ (id)whereClauseForThreadListType:(unsigned int)arg1 specifyArchive:(BOOL)arg2;
+ (id)pinnedThreadsQueryForPinnedGroupsUpdateTime:(long long)arg1;
+ (id)deliveryReceiptsQueryForThreadFbIds:(id)arg1;
+ (id)imagesMultiQuery:(id)arg1 lastThreadPhotoCount:(unsigned int)arg2 limit:(unsigned int)arg3 includeHighQuality:(BOOL)arg4;
+ (id)usersMultiQueryWhereUsers:(id)arg1 whereProfiles:(id)arg2 shouldFetchIsEmployee:(BOOL)arg3;
+ (id)usersMultiQueryWhereUsers:(id)arg1 whereProfiles:(id)arg2;
+ (id)actionsQueryWhere:(id)arg1 order:(id)arg2 limit:(unsigned int)arg3;
+ (id)messagesQueryWhere:(id)arg1 order:(id)arg2 limit:(unsigned int)arg3 useSync:(BOOL)arg4;
+ (id)singleThreadMultiQuery:(id)arg1 shouldQueryUserInfo:(BOOL)arg2;
+ (id)threadsMultiQuery:(id)arg1 order:(id)arg2 limit:(int)arg3 useSync:(BOOL)arg4 shouldQueryUserInfo:(BOOL)arg5 threadListType:(unsigned int)arg6;

@end

