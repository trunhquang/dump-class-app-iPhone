//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPBMutableArray;

@interface TAGPServingValue : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasMacroNameReference; // @dynamic hasMacroNameReference;
@property(nonatomic) BOOL hasMacroReference; // @dynamic hasMacroReference;
@property(nonatomic) BOOL hasTagReference; // @dynamic hasTagReference;
@property(retain, nonatomic) TAGPBMutableArray *listItemArray; // @dynamic listItemArray;
@property(nonatomic) int macroNameReference; // @dynamic macroNameReference;
@property(nonatomic) int macroReference; // @dynamic macroReference;
@property(retain, nonatomic) TAGPBMutableArray *mapKeyArray; // @dynamic mapKeyArray;
@property(retain, nonatomic) TAGPBMutableArray *mapValueArray; // @dynamic mapValueArray;
@property(nonatomic) int tagReference; // @dynamic tagReference;
@property(retain, nonatomic) TAGPBMutableArray *templateTokenArray; // @dynamic templateTokenArray;

@end

