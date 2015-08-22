//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTITasksTasksModule, NSString;

@interface JBTITasksTasksModule_ProvideNotResolvedTaskFetcherFactory : NSObject <DaggerInternalFactory>
{
    JBTITasksTasksModule *module_;
    id <JavaxInjectProvider> bigSetProvider_;
    id <JavaxInjectProvider> taskFactoryProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTITasksTasksModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4;
- (void)dealloc;
- (id)get;
- (id)initWithJBTITasksTasksModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

