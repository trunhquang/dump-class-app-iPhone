//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTIMetricsMetricsModule, NSString;

@interface JBTIMetricsMetricsModule_ProvideSapiSpanFactoryFactory : NSObject <DaggerInternalFactory>
{
    JBTIMetricsMetricsModule *module_;
    id <JavaxInjectProvider> metricsImplProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTIMetricsMetricsModule:(id)arg1 withJavaxInjectProvider:(id)arg2;
- (void)dealloc;
- (id)get;
- (id)initWithJBTIMetricsMetricsModule:(id)arg1 withJavaxInjectProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

