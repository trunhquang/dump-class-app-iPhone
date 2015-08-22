//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSBooleanArray : IOSArray
{
    char buffer_[0];
}

+ (id)iosClass;
+ (id)arrayWithBooleans:(const char *)arg1 count:(unsigned int)arg2;
+ (id)newArrayWithBooleans:(const char *)arg1 count:(unsigned int)arg2;
+ (id)arrayWithLength:(unsigned int)arg1;
+ (id)newArrayWithLength:(unsigned int)arg1;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (id)elementType;
- (void *)buffer;
- (void)getBooleans:(char *)arg1 length:(unsigned int)arg2;
- (BOOL)replaceBooleanAtIndex:(unsigned int)arg1 withBoolean:(BOOL)arg2;
- (char *)booleanRefAtIndex:(unsigned int)arg1;
- (BOOL)booleanAtIndex:(unsigned int)arg1;

@end

