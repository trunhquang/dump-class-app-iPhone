//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplProducersElementProducerDelegate.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplMediasClientProvidedMediaElementProducer_ClientProvidedSourceElementProducerDelegate : NSObject <ComGoogleAppsBigtopSyncClientImplProducersElementProducerDelegate>
{
    id <JBTClientProvidedMediaSource> clientProvidedMediaSource_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)convertToElementsResultWithJavaUtilList:(id)arg1;
- (void)getElementsAsyncWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonSapiCallbackUtil_OneTimeSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJBTClientProvidedMediaSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

