//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSString;

@interface CBLPinvitationalHomefeedExperienceStepData : CBLModelObject
{
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_completeButtonText;
    NSString *_dismissButtonText;
    NSString *_completeButtonDeeplink;
}

+ (id)propertyAliases;
@property(copy, nonatomic) NSString *completeButtonDeeplink; // @synthesize completeButtonDeeplink=_completeButtonDeeplink;
@property(copy, nonatomic) NSString *dismissButtonText; // @synthesize dismissButtonText=_dismissButtonText;
@property(copy, nonatomic) NSString *completeButtonText; // @synthesize completeButtonText=_completeButtonText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;

@end

