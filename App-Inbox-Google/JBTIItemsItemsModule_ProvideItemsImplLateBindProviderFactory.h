//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class JBTIItemsItemsModule, NSString;

@interface JBTIItemsItemsModule_ProvideItemsImplLateBindProviderFactory : NSObject <DaggerInternalFactory>
{
    JBTIItemsItemsModule *module_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithJBTIItemsItemsModule:(id)arg1;
- (void)dealloc;
- (id)get;
- (id)initWithJBTIItemsItemsModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

