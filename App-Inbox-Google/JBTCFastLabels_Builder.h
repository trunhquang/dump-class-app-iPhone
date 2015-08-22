//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JBTCFastLabels_Builder : NSObject
{
    int bitGroup0_;
    int bitGroup1_;
    id <JavaUtilSet> unacceleratedLabels_;
    BOOL hasBuilt_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)removeFastLabelsWithJBTCFastLabels:(id)arg1;
- (id)intersectWithFastLabelsWithJBTCFastLabels:(id)arg1;
- (id)addFastLabelsWithJBTCFastLabels:(id)arg1;
- (id)addLabelsWithJavaUtilCollection:(id)arg1;
- (id)addLabelWithNSString:(id)arg1;
- (void)ensureMutableUnacceleratedSet;
- (id)init;

@end

