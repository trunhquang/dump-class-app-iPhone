//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilEnumeration.h"

@class JavaUtilPropertyResourceBundle, NSString;

@interface JavaUtilPropertyResourceBundle_$1 : NSObject <JavaUtilEnumeration>
{
    JavaUtilPropertyResourceBundle *this$0_;
    id <JavaUtilEnumeration> local_;
    id <JavaUtilEnumeration> pEnum_;
    NSString *nextElement_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilPropertyResourceBundle:(id)arg1;
- (id)nextElement;
- (BOOL)hasMoreElements;
- (BOOL)findNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

