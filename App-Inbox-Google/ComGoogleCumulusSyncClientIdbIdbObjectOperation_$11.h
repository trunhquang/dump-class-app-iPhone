//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbObjectOperation_WriteSuccessCallback.h"

@class ComGoogleCumulusCommonUtilBox_Counter, ComGoogleCumulusSyncClientIdbIdbObjectOperation, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectOperation_$11 : ComGoogleCumulusSyncClientIdbIdbObjectOperation_WriteSuccessCallback
{
    ComGoogleCumulusSyncClientIdbIdbObjectOperation *this$1_;
    NSString *val$storeName_;
    ComGoogleCumulusCommonUtilBox_Counter *val$outstanding_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectOperation:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommonUtilBox_Counter:(id)arg3 withComGoogleCumulusCommonUtilBox_Counter:(id)arg4;
- (void)onFailureWithJavaLangException:(id)arg1;

@end

