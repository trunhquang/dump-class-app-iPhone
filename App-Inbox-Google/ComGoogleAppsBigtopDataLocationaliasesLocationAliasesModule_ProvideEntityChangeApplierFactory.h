//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class NSString;

@interface ComGoogleAppsBigtopDataLocationaliasesLocationAliasesModule_ProvideEntityChangeApplierFactory : NSObject <DaggerInternalFactory>
{
    id <JavaxInjectProvider> factoryProvider_;
    id <JavaxInjectProvider> storageProvider_;
    id <JavaxInjectProvider> entityTypeProvider_;
    id <JavaxInjectProvider> entitySyncStatusManagerProvider_;
    id <JavaxInjectProvider> syncerProvider_;
    id <JavaxInjectProvider> entityDataChangePublisherProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJavaxInjectProvider:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6;
- (void)dealloc;
- (id)get;
- (id)initWithJavaxInjectProvider:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

