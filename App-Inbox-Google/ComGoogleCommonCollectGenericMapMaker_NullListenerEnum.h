//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "ComGoogleCommonCollectMapMaker_RemovalListener.h"
#import "NSCopying.h"

@class NSString;

@interface ComGoogleCommonCollectGenericMapMaker_NullListenerEnum : JavaLangEnum <NSCopying, ComGoogleCommonCollectMapMaker_RemovalListener>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;
- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

