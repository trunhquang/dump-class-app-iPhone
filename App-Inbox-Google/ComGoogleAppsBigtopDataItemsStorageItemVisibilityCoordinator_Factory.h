//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemVisibilityCoordinator_Factory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> clustersTableControllerProvider_;
    id <JavaxInjectProvider> executorProvider_;
    id <JavaxInjectProvider> itemVisibilityTableControllerProvider_;
    id <JavaxInjectProvider> itemsTableControllerProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJavaxInjectProvider:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4;
- (void)dealloc;
- (id)get;
- (id)initWithJavaxInjectProvider:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

