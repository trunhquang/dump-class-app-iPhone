//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonMetric2SpanIdGenerator.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2DefaultSpanIdGenerator : NSObject <ComGoogleCumulusCommonMetric2SpanIdGenerator>
{
    NSString *prefix_;
    int nextId_;
}

- (void)dealloc;
- (id)nextId;
- (id)initWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

