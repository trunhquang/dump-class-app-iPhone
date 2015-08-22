//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PBEnumDescriptor;

@interface PBExtensionDescriptor : NSObject
{
    struct PBExtensionDescription *description_;
}

@property(readonly, retain, nonatomic) PBEnumDescriptor *enumDescriptor;
@property(readonly, nonatomic) Class msgClass;
@property(readonly, nonatomic, getter=isMessage) BOOL message;
@property(readonly, nonatomic, getter=isPackable) BOOL packable;
@property(readonly, nonatomic, getter=isRepeated) BOOL repeated;
@property(readonly, nonatomic) int type;
@property(readonly, nonatomic) unsigned int fieldNumber;
- (const char *)singletonNameC;
@property(readonly, nonatomic) NSString *singletonName;
- (id)initWithExtensionDescription:(struct PBExtensionDescription *)arg1;

@end

