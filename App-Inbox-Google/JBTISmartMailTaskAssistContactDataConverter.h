//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JBTISmartMailTaskAssistContactDataConverter : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)translateEmailTypeWithJBTEmailAddress_EmailTypeEnum:(id)arg1;
+ (id)translatePhoneNumberTypeWithJBTPhoneNumber_PhoneNumberTypeEnum:(id)arg1;
+ (void)addSmsActionWithJBTContactData:(id)arg1 withComGooglePersonalizationAssistAnnotateApiTaskAssistance_Builder:(id)arg2;
+ (void)addEmailActionWithJBTContactData:(id)arg1 withComGooglePersonalizationAssistAnnotateApiTaskAssistance_Builder:(id)arg2;
+ (void)addCallActionWithJBTContactData:(id)arg1 withComGooglePersonalizationAssistAnnotateApiTaskAssistance_Builder:(id)arg2;
+ (id)convertContactDataWithJBTContactData:(id)arg1;
- (id)init;

@end

