//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplSearchOneboxOneBoxItemImpl.h"

#import "JBTConversationSourcedOneBoxItem.h"

@class JBTIConversationConversationFactory, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSearchOneboxConversationSourcedOneBoxItemImpl : ComGoogleAppsBigtopSyncClientImplSearchOneboxOneBoxItemImpl <JBTConversationSourcedOneBoxItem>
{
    id <JavaUtilList> genericSmartMail_;
    JBTIConversationConversationFactory *conversationFactory_;
    id <JBTISmartMailSmartMailCommandApplier_SmartMailTransactionFactory> transactionFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_genericSmartMail_;
+ (id)__annotations_getPrepopulatedSmartMailForConversation;
- (void)dealloc;
- (id)getPrepopulatedSmartMailForConversation;
- (id)getSourceConversationMessageList;
- (void)setGenericSmartMailListWithJavaUtilList:(id)arg1;
- (id)initWithJBTId:(id)arg1 withJBTOneBoxItem_TypeEnum:(id)arg2 withJBTISearchSearchClickLogger_Factory:(id)arg3 withJBTIConversationConversationFactory:(id)arg4 withJBTICommonTransactionFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

