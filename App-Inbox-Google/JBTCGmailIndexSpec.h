//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTCBigTopIndexSpec.h"

@interface JBTCGmailIndexSpec : JBTCBigTopIndexSpec
{
    id <ComGoogleCommonBaseSupplier> allFieldNames_;
    id <JBTCGmailIndexSpec_IndexCreator> setIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (BOOL)matchesNotificationsQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (BOOL)matchesSnoozedQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (BOOL)matchesDoneQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (BOOL)matchesSpamQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (BOOL)matchesTrashQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (BOOL)matchesSentQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
+ (BOOL)matchesDraftsQueryWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
- (void)dealloc;
- (int)getRankWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
- (void)addPresortedFieldWithJBTCGmailIndexSpec_PresortedThreadFieldParser:(id)arg1;
- (void)addDeprecatedFieldWithNSString:(id)arg1;
- (id)getSummaryFieldNames;
- (id)init;

@end

