//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusApiTypeObjectLoader_LoadContext, ComGoogleCumulusSyncClientIdbIdbObjectStore, IOSIntArray, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_$49 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusSyncClientIdbIdbObjectStore *this$0_;
    IOSIntArray *val$docId_;
    id <JavaUtilSet> val$slices_;
    ComGoogleCumulusApiTypeObjectLoader_LoadContext *val$loadContext_;
    id <ComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback> val$callback_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectStore:(id)arg1 withIntArray:(id)arg2 withJavaUtilSet:(id)arg3 withComGoogleCumulusApiTypeObjectLoader_LoadContext:(id)arg4 withComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback:(id)arg5;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

