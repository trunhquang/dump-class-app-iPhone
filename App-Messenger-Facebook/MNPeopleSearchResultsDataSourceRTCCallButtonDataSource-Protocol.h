//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol MNPeopleSearchResultsDataSourceRTCCallButtonDataSource <NSObject>
- (BOOL)peopleSearchDataSourceIsVideoCallingAvailableForContact:(id <FBConversationContact>)arg1;
- (UIImage *)peopleSearchDataSourceVideoCallButtonImage;
- (BOOL)peopleSearchDataSourceIsAudioCallingAvailableForContact:(id <FBConversationContact>)arg1;
- (UIImage *)peopleSearchDataSourceAudioCallButtonImage;
@end
