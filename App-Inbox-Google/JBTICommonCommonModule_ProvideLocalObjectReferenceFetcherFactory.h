//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTICommonCommonModule, NSString;

@interface JBTICommonCommonModule_ProvideLocalObjectReferenceFetcherFactory : NSObject <DaggerInternalFactory>
{
    JBTICommonCommonModule *module_;
    id <JavaxInjectProvider> bigSetProvider_;
    id <JavaxInjectProvider> sapiSpanFactoryProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTICommonCommonModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3;
- (void)dealloc;
- (id)get;
- (id)initWithJBTICommonCommonModule:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

