//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusFrameworkConfigClientWorkerConfiguration_ClientResponseProducerFactory.h"

@class ComGoogleCumulusCommonConfigConfiguration, NSString;

@interface ComGoogleCumulusFrameworkConfigClientWorkerMetricsBundle_$6_$1 : NSObject <ComGoogleCumulusFrameworkConfigClientWorkerConfiguration_ClientResponseProducerFactory>
{
    ComGoogleCumulusCommonConfigConfiguration *val$config_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusCommonConfigConfiguration:(id)arg1;
- (id)createWithNSString:(id)arg1 withComGoogleCumulusCommonUtilEventBus:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

