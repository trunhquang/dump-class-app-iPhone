//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol MNContactSuggestionsDelegate <NSObject>
- (void)didRetrieveSuggestedConversationContacts:(NSArray *)arg1;

@optional
- (void)didRetrieveSuggestedContacts:(NSArray *)arg1 sectionTitles:(NSArray *)arg2 sectionScores:(NSArray *)arg3;
@end
