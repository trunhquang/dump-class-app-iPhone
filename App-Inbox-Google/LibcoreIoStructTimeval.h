//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LibcoreIoStructTimeval : NSObject
{
    long long tv_sec_;
    long long tv_usec_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)fromMillisWithLong:(long long)arg1;
- (id)description;
- (long long)toMillis;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2;

@end

