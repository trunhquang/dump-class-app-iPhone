//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoDataInput.h"
#import "JavaLangAutoCloseable.h"
#import "JavaObject.h"
#import "NSObject.h"

@class IOSByteArray;

@protocol JavaIoObjectInput <JavaIoDataInput, JavaLangAutoCloseable, NSObject, JavaObject>
- (long long)skipWithLong:(long long)arg1;
- (id)readObject;
- (int)readWithByteArray:(IOSByteArray *)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithByteArray:(IOSByteArray *)arg1;
- (int)read;
- (void)close;
- (int)available;
@end

