//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTICommonCumulusTransaction_Operation.h"

@class ComGoogleCommonBaseOptional, JBTIds_StorageId;

@interface JBTICommonCumulusTransaction_DeleteOperation : JBTICommonCumulusTransaction_Operation
{
    JBTIds_StorageId *storageId_;
    ComGoogleCommonBaseOptional *parentBulkCommandId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)addToBatchWithComGoogleCumulusApiBigSet:(id)arg1 withComGoogleCumulusApiBatch:(id)arg2 withJBTICommonSapiSpan:(id)arg3;
- (id)initWithJBTId:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2;

@end

