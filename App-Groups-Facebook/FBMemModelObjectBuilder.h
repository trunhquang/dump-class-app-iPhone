//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBMemModelObjectBuilder : NSObject
{
    unique_ptr_3d817fac _impl;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getResult;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forFieldNumber:(int)arg2 fieldMetadata:(const struct FieldMetadata *)arg3;
- (id)initWithImpl:(unique_ptr_3d817fac)arg1;
- (id)initWithRecordAndSnapshot:(const struct RecordAndSnapshot *)arg1;
- (id)initWithNativeModelObject:(id)arg1;
- (id)init;

@end

