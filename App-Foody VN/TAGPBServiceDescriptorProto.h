//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray, TAGPBServiceOptions;

@interface TAGPBServiceDescriptorProto : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasName; // @dynamic hasName;
@property(nonatomic) BOOL hasOptions; // @dynamic hasOptions;
@property(retain, nonatomic) TAGPBMutableArray *methodArray; // @dynamic methodArray;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TAGPBServiceOptions *options; // @dynamic options;
@property(retain, nonatomic) TAGPBMutableArray *streamArray; // @dynamic streamArray;

@end

