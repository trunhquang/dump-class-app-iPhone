//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentCallable.h"

@class ComGoogleAppsBigtopDataItemsMemoryItemMessageList, NSString;

@interface ComGoogleAppsBigtopDataItemsItemsServiceServer_$19 : NSObject <JavaUtilConcurrentCallable>
{
    ComGoogleAppsBigtopDataItemsMemoryItemMessageList *val$itemMessageList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsMemoryItemMessageList:(id)arg1;
- (id)call;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

