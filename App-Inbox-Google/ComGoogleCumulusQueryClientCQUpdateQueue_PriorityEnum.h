//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "ComGoogleCumulusQueryClientCQUpdateQueue_PriorityValue.h"
#import "NSCopying.h"

@class NSString;

@interface ComGoogleCumulusQueryClientCQUpdateQueue_PriorityEnum : JavaLangEnum <NSCopying, ComGoogleCumulusQueryClientCQUpdateQueue_PriorityValue>
{
    int value_;
}

+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)getValue;
- (id)initWithInt:(int)arg1 withNSString:(id)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

