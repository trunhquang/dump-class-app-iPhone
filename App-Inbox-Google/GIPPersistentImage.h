//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSDate, NSString;

@interface GIPPersistentImage : NSManagedObject
{
}

+ (id)entityName;
+ (id)entityDescription;
+ (id)attributeWithName:(id)arg1 type:(unsigned int)arg2;

// Remaining properties
@property(retain, nonatomic) NSData *imageData; // @dynamic imageData;
@property(retain, nonatomic) NSDate *imageExpire; // @dynamic imageExpire;
@property(retain, nonatomic) NSString *imageId; // @dynamic imageId;

@end

