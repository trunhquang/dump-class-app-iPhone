//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsApplyChangesRequestHandler, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataItemsApplyChangesRequestHandler_$5 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsApplyChangesRequestHandler *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsApplyChangesRequestHandler:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

