//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxAnnotationMatchesPattern.h"

@class NSString;

@interface JavaxAnnotationMatchesPattern : NSObject <JavaxAnnotationMatchesPattern>
{
    NSString *value_;
    int flags_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
+ (int)flagsDefault;
@property(readonly) int flags; // @synthesize flags=flags_;
@property(readonly) NSString *value; // @synthesize value=value_;
@property(readonly, copy) NSString *description;
- (id)annotationType;
- (id)initWithFlags:(int)arg1 withValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

