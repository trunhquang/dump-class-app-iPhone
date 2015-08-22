//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTISearchSearchModule, NSString;

@interface JBTISearchSearchModule_ProvideSmartMailItemFactoryFactory : NSObject <DaggerInternalFactory>
{
    JBTISearchSearchModule *module_;
    id <JavaxInjectProvider> conversationFetcherProvider_;
    id <JavaxInjectProvider> conversationFactoryProvider_;
    id <JavaxInjectProvider> transactionFactoryProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
    id <JavaxInjectProvider> searchClickLoggerFactoryProvider_;
    id <JavaxInjectProvider> oneBoxFactoryProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTISearchSearchModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7;
- (void)dealloc;
- (id)get;
- (id)initWithJBTISearchSearchModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4 withJavaxInjectProvider:(id)arg5 withJavaxInjectProvider:(id)arg6 withJavaxInjectProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

