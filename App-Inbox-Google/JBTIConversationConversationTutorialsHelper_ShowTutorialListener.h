//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonTransaction_CommitListener.h"

@class JBTIConversationConversationTutorialsHelper, JBTTutorial_TypeEnum, NSString;

@interface JBTIConversationConversationTutorialsHelper_ShowTutorialListener : NSObject <JBTICommonTransaction_CommitListener>
{
    JBTIConversationConversationTutorialsHelper *this$0_;
    id <JavaUtilList> conditionals_;
    id <JBTConversation> conversation_;
    id <JavaUtilSet> dependencies_;
    JBTTutorial_TypeEnum *tutorialType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)onTxCommittedWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJBTIConversationConversationTutorialsHelper:(id)arg1 withJBTConversation:(id)arg2 withJBTTutorial_TypeEnum:(id)arg3 withJavaUtilList:(id)arg4 withJavaUtilSet:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

