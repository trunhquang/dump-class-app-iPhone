//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PBMutableArray;

@interface ApplicationSettings : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PBMutableArray *alwaysExcludedArray; // @dynamic alwaysExcludedArray;
@property(retain, nonatomic) PBMutableArray *alwaysRequiredArray; // @dynamic alwaysRequiredArray;
@property(retain, nonatomic) PBMutableArray *atleastOneRequiredArray; // @dynamic atleastOneRequiredArray;
@property(nonatomic) BOOL hasAlwaysExcludedArray; // @dynamic hasAlwaysExcludedArray;
@property(nonatomic) BOOL hasAlwaysRequiredArray; // @dynamic hasAlwaysRequiredArray;
@property(nonatomic) BOOL hasAtleastOneRequiredArray; // @dynamic hasAtleastOneRequiredArray;
@property(nonatomic) BOOL hasLabelForUnreadBadgeCount; // @dynamic hasLabelForUnreadBadgeCount;
@property(nonatomic) BOOL hasNotificationType; // @dynamic hasNotificationType;
@property(retain, nonatomic) NSString *labelForUnreadBadgeCount; // @dynamic labelForUnreadBadgeCount;
@property(nonatomic) int notificationType; // @dynamic notificationType;

@end

