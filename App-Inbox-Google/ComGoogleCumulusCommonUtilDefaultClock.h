//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonUtilClock.h"

@class NSString;

@interface ComGoogleCumulusCommonUtilDefaultClock : NSObject <ComGoogleCumulusCommonUtilClock>
{
}

+ (void)initialize;
+ (id)defaultInstance;
- (double)durationMillisWithInt:(int)arg1 withInt:(int)arg2;
- (double)durationMillisWithInt:(int)arg1;
- (int)relativeTimeMillis;
- (id)init;
- (double)currentTimeMillisAsDouble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

