//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy_$7_$1, NSString;

@interface ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy_$7_$1_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy_$7_$1 *this$0_;
    double responseStartTime_;
    NSString *val$soid_;
    id <ComGoogleCumulusApiTypeObjectReader> val$reader_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientObjectStoreWorkQueueProxy_$7_$1:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusApiTypeObjectReader:(id)arg3;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

