//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBCrowdsourcingBellerophonLogger : NSObject
{
    NSString *_placesResultID;
    NSArray *_placeIDs;
    NSString *_placePickerSessionID;
    NSString *_composerSessionID;
    NSString *_bellerophonSessionID;
}

@property(copy, nonatomic) NSString *bellerophonSessionID; // @synthesize bellerophonSessionID=_bellerophonSessionID;
@property(copy, nonatomic) NSString *composerSessionID; // @synthesize composerSessionID=_composerSessionID;
@property(copy, nonatomic) NSString *placePickerSessionID; // @synthesize placePickerSessionID=_placePickerSessionID;
@property(copy, nonatomic) NSArray *placeIDs; // @synthesize placeIDs=_placeIDs;
@property(copy, nonatomic) NSString *placesResultID; // @synthesize placesResultID=_placesResultID;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 WithExtraData:(id)arg2;
- (id)extraDictionary;
- (void)setPlacePickerResultID:(id)arg1;
- (void)logEvent:(id)arg1;
- (id)initWithPlacePickerSessionID:(id)arg1 composerSessionID:(id)arg2;

@end

