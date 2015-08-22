//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoCloseable.h"

@class NSString;

@interface JavaIoInputStream : NSObject <JavaIoCloseable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (long long)skipWithLong:(long long)arg1;
- (void)reset;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithByteArray:(id)arg1;
- (int)read;
- (BOOL)markSupported;
- (void)markWithInt:(int)arg1;
- (void)close;
- (int)available;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

