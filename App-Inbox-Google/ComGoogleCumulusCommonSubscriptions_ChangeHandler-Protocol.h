//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaLangThrowable, NSString;

@protocol ComGoogleCumulusCommonSubscriptions_ChangeHandler <NSObject, JavaObject>
- (void)onErrorWithJavaLangThrowable:(JavaLangThrowable *)arg1;
- (void)onSubscriptionStatusChangeWithNSString:(NSString *)arg1;
- (void)onSubscriptionChangeWithNSString:(NSString *)arg1;
- (void)onInitialized;
@end

