//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxInjectProvider.h"

@class JBTICommonScheduler, NSString;

@interface JBTSchedulerProvider : NSObject <JavaxInjectProvider>
{
    JBTICommonScheduler *scheduler_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_scheduler_;
+ (id)__annotations_init;
+ (id)__annotations;
- (void)dealloc;
- (void)setWithJBTICommonScheduler:(id)arg1;
- (id)get;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

