//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangClassLoader;

@interface JavaxXmlXpathXPathFactoryFinder : NSObject
{
    JavaLangClassLoader *classLoader_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)whichWithNSString:(id)arg1 withJavaLangClassLoader:(id)arg2;
+ (id)whichWithIOSClass:(id)arg1;
+ (void)debugPrintlnWithNSString:(id)arg1;
- (void)dealloc;
- (id)createServiceFileIterator;
- (id)loadFromServicesFileWithNSString:(id)arg1 withNSString:(id)arg2 withJavaIoInputStream:(id)arg3;
- (id)createInstanceWithNSString:(id)arg1;
- (id)_newFactoryWithNSString:(id)arg1;
- (id)newFactoryWithNSString:(id)arg1;
- (void)debugDisplayClassLoader;
- (id)initWithJavaLangClassLoader:(id)arg1;

@end

