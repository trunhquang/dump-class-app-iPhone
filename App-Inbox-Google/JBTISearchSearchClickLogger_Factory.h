//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JBTISearchSearchClickLogger_Factory : NSObject
{
    id <DaggerLazy> metricsChannel_;
    id <DaggerLazy> zeroStateSuggestionsCache_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)createWithJBTISearchSearchMetadata:(id)arg1 withJBTIds_StorageId:(id)arg2;
- (id)initWithDaggerLazy:(id)arg1 withDaggerLazy:(id)arg2;

@end

