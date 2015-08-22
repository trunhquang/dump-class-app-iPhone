//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetChannel.h"

@class ComGoogleProtobufExtensionRegistry, CumulusOAuthManager, NSString, NSURL;

@interface IosHttpChannel : NSObject <ComGoogleCumulusCommonNetChannel>
{
    NSURL *url_;
    NSString *userAgent_;
    ComGoogleProtobufExtensionRegistry *registry_;
    id <JCGCuWorkQueue> workQueue_;
    CumulusOAuthManager *authManager_;
}

+ (id)channelWithUrl:(id)arg1 userAgent:(id)arg2 registry:(id)arg3 workQueue:(id)arg4 authManager:(id)arg5;
@property(retain, nonatomic) CumulusOAuthManager *authManager; // @synthesize authManager=authManager_;
@property(retain, nonatomic) id <JCGCuWorkQueue> workQueue; // @synthesize workQueue=workQueue_;
@property(retain, nonatomic) ComGoogleProtobufExtensionRegistry *registry; // @synthesize registry=registry_;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=userAgent_;
@property(retain, nonatomic) NSURL *url; // @synthesize url=url_;
- (void)openWithComGoogleCumulusCommonNetChannel_Handler:(id)arg1;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 userAgent:(id)arg2 registry:(id)arg3 workQueue:(id)arg4 authManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

