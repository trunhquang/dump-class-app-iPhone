//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTCBigTopApplicationInfo, JBTICommonSapiSpan_Factory, JBTITasksLocationAllowedProvider, JBTITasksTaskAssistService, JBTITasksTaskSuggestionFactory;

@interface JBTITasksTaskSuggestionChannelWrapperFactory : NSObject
{
    JBTITasksTaskAssistService *taskAssistService_;
    JBTITasksTaskSuggestionFactory *suggestionFactory_;
    id <JBTUserLocaleHelper> userLocaleHelper_;
    id <JBTLocationHelper> locationHelper_;
    JBTITasksLocationAllowedProvider *locationAllowedProvider_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTCBigTopApplicationInfo *applicationInfo_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJBTITasksTaskAssistService_withJBTITasksTaskSuggestionFactory_withJBTUserLocaleHelper_withJBTLocationHelper_withJBTITasksLocationAllowedProvider_withJBTICommonSapiSpan_Factory_withJBTCBigTopApplicationInfo_;
+ (id)__annotations;
- (void)dealloc;
- (id)createChannelWrapperWithInt:(int)arg1 withNSString:(id)arg2;
- (id)initWithJBTITasksTaskAssistService:(id)arg1 withJBTITasksTaskSuggestionFactory:(id)arg2 withJBTUserLocaleHelper:(id)arg3 withJBTLocationHelper:(id)arg4 withJBTITasksLocationAllowedProvider:(id)arg5 withJBTICommonSapiSpan_Factory:(id)arg6 withJBTCBigTopApplicationInfo:(id)arg7;

@end

