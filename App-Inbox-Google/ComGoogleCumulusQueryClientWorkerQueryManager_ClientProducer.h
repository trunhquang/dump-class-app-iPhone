//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetMessageProducer.h"

@class ComGoogleCumulusQueryClientWorkerQueryManager, NSString;

@interface ComGoogleCumulusQueryClientWorkerQueryManager_ClientProducer : NSObject <ComGoogleCumulusCommonNetMessageProducer>
{
    ComGoogleCumulusQueryClientWorkerQueryManager *this$0_;
    NSString *clientId_;
}

- (void)dealloc;
- (void)dispose;
- (id)produceMessageWithComGoogleCumulusCommonNetMessageProducer_PriorityEnum:(id)arg1;
- (id)initWithComGoogleCumulusQueryClientWorkerQueryManager:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

