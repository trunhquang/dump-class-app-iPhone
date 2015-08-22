//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBContactSearchResult, NSIndexPath, NSString;

@protocol MNPeopleTableViewDataProvider <NSObject>
- (NSString *)conversationInitiatorIdentifier:(int)arg1;
- (BOOL)isPeopleSearchResults;
- (FBContactSearchResult *)resultForIndexPath:(NSIndexPath *)arg1;
- (unsigned int)peopleCount;
- (int)absoluteRowIndexForIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleForHeaderInSection:(int)arg1;

@optional
- (unsigned int)topFriendsCount;
@end
