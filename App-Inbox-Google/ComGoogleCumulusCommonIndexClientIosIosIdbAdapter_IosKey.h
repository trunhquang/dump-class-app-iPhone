//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_RefCounted.h"

#import "ComGoogleCumulusCommonIndexIdbAdapter_Key.h"

@class NSString;

@interface ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_IosKey : ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_RefCounted <ComGoogleCumulusCommonIndexIdbAdapter_Key>
{
}

@property(readonly, copy) NSString *description;
- (long long)docIdValueNative;
- (id)docIdValue;
- (double)doubleValue;
- (id)stringValue;
- (id)initWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

