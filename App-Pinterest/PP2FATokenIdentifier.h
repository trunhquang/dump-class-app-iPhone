//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PP2FATokenIdentifier : NSObject
{
    unsigned int _type;
    NSString *_identifier;
    NSString *_displayNumber;
}

@property(retain, nonatomic) NSString *displayNumber; // @synthesize displayNumber=_displayNumber;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

