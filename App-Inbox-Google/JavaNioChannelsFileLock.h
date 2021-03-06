//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangAutoCloseable.h"

@class JavaNioChannelsFileChannel, NSString;

@interface JavaNioChannelsFileLock : NSObject <JavaLangAutoCloseable>
{
    JavaNioChannelsFileChannel *channel_;
    long long position_;
    long long size_;
    BOOL shared_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)close;
- (void)release__;
- (BOOL)isValid;
- (BOOL)overlapsWithLong:(long long)arg1 withLong:(long long)arg2;
- (BOOL)isShared;
- (long long)size;
- (long long)position;
- (id)channel;
- (id)initWithJavaNioChannelsFileChannel:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withBoolean:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

