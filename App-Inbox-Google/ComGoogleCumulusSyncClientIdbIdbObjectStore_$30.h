//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbObjectStore_CursorCallback.h"

@class ComGoogleCumulusSyncClientIdbIdbObjectStore, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_$30 : ComGoogleCumulusSyncClientIdbIdbObjectStore_CursorCallback
{
    ComGoogleCumulusSyncClientIdbIdbObjectStore *this$1_;
    id <ComGoogleCommonBaseReceiver> val$callback_;
    id <JavaUtilSet> val$terms_;
    NSString *val$prefix_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectStore:(id)arg1 withComGoogleCommonBaseReceiver:(id)arg2 withJavaUtilSet:(id)arg3 withNSString:(id)arg4;
- (void)onFailureWithJavaLangException:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

@end

