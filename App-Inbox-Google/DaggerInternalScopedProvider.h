//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxInjectProvider.h"

@class NSString;

@interface DaggerInternalScopedProvider : NSObject <JavaxInjectProvider>
{
    id <DaggerInternalFactory> factory_;
    // Error parsing type: A^v, name: instance_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)createWithDaggerInternalFactory:(id)arg1;
- (void)__javaClone;
- (void)dealloc;
- (id)get;
- (id)initWithDaggerInternalFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

