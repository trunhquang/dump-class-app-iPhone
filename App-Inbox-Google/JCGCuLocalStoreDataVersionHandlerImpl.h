//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuLocalStoreDataVersionHandler.h"

@class NSString;

@interface JCGCuLocalStoreDataVersionHandlerImpl : NSObject <JCGCuLocalStoreDataVersionHandler>
{
    id <ComGoogleCumulusSyncClientObjectStore> store_;
    id <ComGoogleCommonBaseReceiver> storeWipeReceiver_;
}

+ (void)initialize;
- (void)dealloc;
- (void)handleWithComGoogleCumulusCommonNetProto_StoreWipeInfo:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientObjectStore:(id)arg1 withComGoogleCommonBaseReceiver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

