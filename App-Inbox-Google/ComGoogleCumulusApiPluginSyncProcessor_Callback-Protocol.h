//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusApiPluginBackwardRangeResult, ComGoogleCumulusApiPluginClientActionRequest, ComGoogleCumulusApiPluginForwardRangeResult, ComGoogleCumulusApiPluginSyncObject, JavaLangException;

@protocol ComGoogleCumulusApiPluginSyncProcessor_Callback <NSObject, JavaObject>
- (void)onAbortWithJavaLangException:(JavaLangException *)arg1;
- (void)onComplete;
- (void)addSyncObjectWithComGoogleCumulusApiPluginSyncObject:(ComGoogleCumulusApiPluginSyncObject *)arg1;
- (void)requestActionWithComGoogleCumulusApiPluginClientActionRequest:(ComGoogleCumulusApiPluginClientActionRequest *)arg1;
- (void)onBackwardRangeCompleteWithComGoogleCumulusApiPluginBackwardRangeResult:(ComGoogleCumulusApiPluginBackwardRangeResult *)arg1;
- (void)onForwardRangeCompleteWithComGoogleCumulusApiPluginForwardRangeResult:(ComGoogleCumulusApiPluginForwardRangeResult *)arg1;
@end

