//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTClusterNameValidator.h"

@class NSString;

@interface JBTIClustersClusterNameValidatorImpl : NSObject <JBTClusterNameValidator>
{
    id <JavaUtilSet> canonicalizedBannedClusterNames_;
    id <JavaUtilSet> canonicalizedExistingCustomClusterNames_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)canonicalizeWithNSString:(id)arg1;
+ (id)createWithJBTTranslationHelper:(id)arg1 withJBTIClustersClusterFetcher:(id)arg2;
- (void)dealloc;
- (id)validateNewNameForExistingClusterWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)validateNameForNewClusterWithNSString:(id)arg1;
- (id)initWithJavaUtilSet:(id)arg1 withJavaUtilSet:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

