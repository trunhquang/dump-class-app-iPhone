//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ApplicationSettings, PBMutableArray;

@interface GetApplicationSettingsResponse : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PBMutableArray *accountSettingsArray; // @dynamic accountSettingsArray;
@property(retain, nonatomic) ApplicationSettings *applicationSettings; // @dynamic applicationSettings;
@property(nonatomic) BOOL hasAccountSettingsArray; // @dynamic hasAccountSettingsArray;
@property(nonatomic) BOOL hasApplicationSettings; // @dynamic hasApplicationSettings;

@end

