//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLExperience, NSDictionary;

@interface CBLExperienceData : NSObject
{
    NSDictionary *_displayData;
    CBLExperience *_experience;
}

@property(readonly, nonatomic) CBLExperience *experience; // @synthesize experience=_experience;
@property(readonly, nonatomic) NSDictionary *displayData; // @synthesize displayData=_displayData;
- (void).cxx_destruct;
- (int)integerValueForKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;
- (id)initFromExperience:(id)arg1;

@end
