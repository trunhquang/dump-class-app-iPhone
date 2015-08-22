//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBaseReceiver.h"

@class ComGoogleCumulusCommonMetric2SpanRecordFormatter, NSString, XPLTXLogLevelEnum;

@interface JBTBigTopSpanRecordReceiver : NSObject <ComGoogleCommonBaseReceiver>
{
    XPLTXLogLevelEnum *logLevel_;
    ComGoogleCumulusCommonMetric2SpanRecordFormatter *formatter_;
    NSString *message_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_acceptWithComGoogleCumulusCommonMetric2SpanRecord__params;
+ (void)initialize;
- (void)dealloc;
- (void)acceptWithId:(id)arg1;
- (id)initWithXPLTXLogLevelEnum:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommonMetric2SpanRecordFormatter:(id)arg3 withComGoogleCumulusCommonUtilClock:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

