//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl.h"

#import "JBTMediaList.h"

@class JBTMediaList_TypeEnum, NSString;

@interface ComGoogleAppsBigtopSyncClientImplMediasMediaListImpl : ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl <JBTMediaList>
{
    JBTMediaList_TypeEnum *type_;
    NSString *rank_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getRank;
- (id)getId;
- (id)getType;
- (id)initWithJBTMediaList_TypeEnum:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager:(id)arg3 withComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg4 withComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_Adaptor:(id)arg5 withJBTICommonSapiSpan_Factory:(id)arg6 withJBTCBigTopCommonEnums_MetricEnum:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

