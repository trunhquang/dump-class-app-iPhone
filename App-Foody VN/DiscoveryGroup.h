//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface DiscoveryGroup : NSObject
{
    NSString *_type;
    NSArray *_restaurantList;
    NSString *_name;
    int _totalResCount;
    NSString *_resType;
    NSString *_groupId;
}

@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *resType; // @synthesize resType=_resType;
@property(nonatomic) int totalResCount; // @synthesize totalResCount=_totalResCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSArray *restaurantList; // @synthesize restaurantList=_restaurantList;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

