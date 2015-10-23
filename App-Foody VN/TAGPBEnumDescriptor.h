//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TAGPBArray;

@interface TAGPBEnumDescriptor : NSObject
{
    NSString *name_;
    TAGPBArray *values_;
    CDUnknownFunctionPointerType enumVerifier_;
}

+ (id)descriptorForName:(const char *)arg1;
+ (id)allocDescriptorForName:(id)arg1 values:(struct TAGPBMessageEnumValueDescription *)arg2 valueCount:(unsigned int)arg3 enumVerifier:(CDUnknownFunctionPointerType)arg4;
@property(readonly, nonatomic) CDUnknownFunctionPointerType enumVerifier; // @synthesize enumVerifier=enumVerifier_;
@property(readonly, nonatomic) TAGPBArray *values; // @synthesize values=values_;
@property(readonly, nonatomic) NSString *name; // @synthesize name=name_;
- (void)dealloc;
- (id)enumValueWithName:(id)arg1;
- (id)enumValueWithNumber:(int)arg1;
- (id)initWithName:(id)arg1 values:(id)arg2 enumVerifier:(CDUnknownFunctionPointerType)arg3;

@end

