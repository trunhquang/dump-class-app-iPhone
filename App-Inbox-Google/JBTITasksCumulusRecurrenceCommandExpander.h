//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTITasksRecurrenceCommandExpander.h"

@class JBTITasksLocalTaskFetcher, NSString;

@interface JBTITasksCumulusRecurrenceCommandExpander : NSObject <JBTITasksRecurrenceCommandExpander>
{
    id <JBTICommonIdFactory> bulkCommandIdFactory_;
    JBTITasksLocalTaskFetcher *localTaskFetcher_;
    id <JBTICommonIdFactory> queryKeyFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)getQueryKey;
- (id)objectReferenceForCreateWithJBTId:(id)arg1;
- (id)toObjectReferenceWithJBTITasksLocalTaskFetcher_LocalTask:(id)arg1;
- (void)expandBulkCommandOperationsWithJBTICommonTransaction:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2 withComGoogleCumulusTypeTypeProto_Command:(id)arg3 withJBTITasksRecurrenceCommandExpander_LocalTaskCommandFactory:(id)arg4 withJavaUtilMap:(id)arg5 withJavaUtilMap:(id)arg6;
- (void)addCommandsToTransactionWithComGoogleCumulusApiQuerySpec:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilMap:(id)arg3 withComGoogleCumulusTypeTypeProto_Command:(id)arg4 withJBTITasksRecurrenceCommandExpander_LocalTaskCommandFactory:(id)arg5 withJBTICommonTransaction:(id)arg6;
- (id)initWithJBTICommonIdFactory:(id)arg1 withJBTITasksLocalTaskFetcher:(id)arg2 withJBTICommonIdFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

