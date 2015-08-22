//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class JBTCommand_TypeEnum, JBTITasksTaskArchiveTrashCommandResultFactory, NSString;

@interface JBTITasksTaskArchiveTrashCommandResultFactory_CallbackAdapter : NSObject <JBTICommonSapiCallback>
{
    JBTITasksTaskArchiveTrashCommandResultFactory *this$0_;
    id <JBTCallback> delegateCallback_;
    id <JBTTask> task_;
    JBTCommand_TypeEnum *commandType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;
- (id)initWithJBTITasksTaskArchiveTrashCommandResultFactory:(id)arg1 withJBTCallback:(id)arg2 withJBTTask:(id)arg3 withJBTCommand_TypeEnum:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

