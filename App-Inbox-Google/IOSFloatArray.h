//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSFloatArray : IOSArray
{
    float buffer_[0];
}

+ (id)iosClass;
+ (id)arrayWithFloats:(const float *)arg1 count:(unsigned int)arg2;
+ (id)newArrayWithFloats:(const float *)arg1 count:(unsigned int)arg2;
+ (id)arrayWithLength:(unsigned int)arg1;
+ (id)newArrayWithLength:(unsigned int)arg1;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (id)elementType;
- (void *)buffer;
- (void)getFloats:(float *)arg1 length:(unsigned int)arg2;
- (float)replaceFloatAtIndex:(unsigned int)arg1 withFloat:(float)arg2;
- (float *)floatRefAtIndex:(unsigned int)arg1;
- (float)floatAtIndex:(unsigned int)arg1;

@end

