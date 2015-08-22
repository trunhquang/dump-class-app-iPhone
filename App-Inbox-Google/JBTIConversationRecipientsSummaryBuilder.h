//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTIConversationAbstractSummaryBuilder.h"

@interface JBTIConversationRecipientsSummaryBuilder : JBTIConversationAbstractSummaryBuilder
{
    id <JavaUtilList> recipients_;
    id <JavaUtilList> bccRecipients_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (BOOL)buildRecipientElementWithJBTCContactRef:(id)arg1;
- (void)buildBccRecipients;
- (void)buildRecipients;
- (id)getOverflowElement;
- (void)buildAllElements;
- (id)build;
- (void)addBccRecipientsWithJavaUtilList:(id)arg1;
- (void)addBccRecipientWithJBTCContactRef:(id)arg1;
- (void)addRecipientsWithJavaUtilList:(id)arg1;
- (void)addRecipientWithJBTCContactRef:(id)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withJBTICommonUserInfo:(id)arg3;

@end

