//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuChannel.h"

@class NSString;

@interface JCGCuChannels_$1 : NSObject <JCGCuChannel>
{
    id <JCGCuChannel> val$channel_;
    id <ComGoogleCommonBaseFunction> val$inputFn_;
    id <ComGoogleCommonBaseFunction> val$outputFn_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJCGCuChannel:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2 withComGoogleCommonBaseFunction:(id)arg3;
- (void)sendWithId:(id)arg1 withJCGCuCallback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

