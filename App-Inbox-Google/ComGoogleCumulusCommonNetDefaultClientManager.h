//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetClientManager.h"

@class NSString;

@interface ComGoogleCumulusCommonNetDefaultClientManager : NSObject <ComGoogleCumulusCommonNetClientManager>
{
    id <ComGoogleCumulusCommonNetClientManager_Handler> handler_;
    id <JavaUtilMap> clientSockets_;
}

+ (void)initialize;
- (void)dealloc;
- (void)addClientWithNSString:(id)arg1 withComGoogleCumulusCommonNetChannel:(id)arg2;
- (void)broadcastWithId:(id)arg1;
- (void)sendWithNSString:(id)arg1 withId:(id)arg2;
- (id)initWithComGoogleCumulusCommonNetClientManager_Handler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

