//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, Photo;

@interface Brand : NSObject
{
    Photo *photo;
    NSString *name;
    unsigned int resCount;
    unsigned int reviewCount;
    unsigned int photoCount;
    NSMutableArray *citiesMArray;
}

@property(retain, nonatomic) NSMutableArray *citiesMArray; // @synthesize citiesMArray;
@property(nonatomic) unsigned int photoCount; // @synthesize photoCount;
@property(nonatomic) unsigned int reviewCount; // @synthesize reviewCount;
@property(nonatomic) unsigned int resCount; // @synthesize resCount;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) Photo *photo; // @synthesize photo;
- (void).cxx_destruct;

@end
