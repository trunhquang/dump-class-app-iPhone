//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBaseReceiver.h"
#import "ComGoogleCumulusCommonNetMessageProducer.h"

@class ComGoogleCumulusSyncClientSubscriptionsManager, ComGoogleCumulusSyncSubscriptionsProto_Response_Builder, NSString;

@interface ComGoogleCumulusSyncClientSubscriptionsManager_ClientProducer : NSObject <ComGoogleCumulusCommonNetMessageProducer, ComGoogleCommonBaseReceiver>
{
    ComGoogleCumulusSyncClientSubscriptionsManager *this$0_;
    ComGoogleCumulusSyncSubscriptionsProto_Response_Builder *pendingResponse_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientSubscriptionsManager:(id)arg1;
- (void)dispose;
- (id)produceMessageWithComGoogleCumulusCommonNetMessageProducer_PriorityEnum:(id)arg1;
- (void)acceptWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

