//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTSapiSystemModule, NSString;

@interface JBTSapiSystemModule_ProvideTimeServiceFactory : NSObject <DaggerInternalFactory>
{
    JBTSapiSystemModule *module_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTSapiSystemModule:(id)arg1;
- (void)dealloc;
- (id)get;
- (id)initWithJBTSapiSystemModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

