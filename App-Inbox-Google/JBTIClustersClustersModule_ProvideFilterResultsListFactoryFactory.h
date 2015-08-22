//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTIClustersClustersModule, NSString;

@interface JBTIClustersClustersModule_ProvideFilterResultsListFactoryFactory : NSObject <DaggerInternalFactory>
{
    JBTIClustersClustersModule *module_;
    id <JavaxInjectProvider> liveListsManagerProvider_;
    id <JavaxInjectProvider> contactFetchingListenerFactoryProvider_;
    id <JavaxInjectProvider> bulkCommandHelpersProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
    id <JavaxInjectProvider> transactionFactoryProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTIClustersClustersModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6;
- (void)dealloc;
- (id)get;
- (id)initWithJBTIClustersClustersModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

