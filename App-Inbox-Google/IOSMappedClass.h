//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSConcreteClass.h"

@class NSString;

@interface IOSMappedClass : IOSConcreteClass
{
    NSString *package_;
    NSString *name_;
}

- (BOOL)isAnonymousClass;
- (BOOL)isEnum;
- (id)getConstructors;
- (id)getDeclaredConstructors;
- (void)collectMethods:(id)arg1 publicOnly:(BOOL)arg2;
- (id)getPackage;
- (id)objcName;
- (id)getSimpleName;
- (id)getName;
- (id)initWithClass:(Class)arg1 package:(id)arg2 name:(id)arg3;

@end

