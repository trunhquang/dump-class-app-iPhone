//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusQueryClientStartupResultCacheWriter_StartupResultWriter.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusQueryQueryProto_SchemaVersion, NSString;

@interface ComGoogleCumulusQueryClientNongwtFileStartupResultWriter : NSObject <ComGoogleCumulusQueryClientStartupResultCacheWriter_StartupResultWriter>
{
    ComGoogleCumulusQueryQueryProto_SchemaVersion *schemaVersion_;
    NSString *filepath_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
}

+ (void)initialize;
+ (BOOL)delete__WithJavaIoFile:(id)arg1;
+ (void)closeWithJavaIoCloseable:(id)arg1;
- (void)dealloc;
- (BOOL)delete__;
- (void)writeWithJavaLangIterable:(id)arg1;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

