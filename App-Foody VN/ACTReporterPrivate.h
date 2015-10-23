//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACTReporterPrivate : NSObject
{
    id <ACTReportingInfoDelegate> _reportingInfoDelegate;
    id <ACTPingerDelegate> _pingerDelegate;
}

@property(nonatomic) __weak id <ACTPingerDelegate> pingerDelegate; // @synthesize pingerDelegate=_pingerDelegate;
@property(nonatomic) __weak id <ACTReportingInfoDelegate> reportingInfoDelegate; // @synthesize reportingInfoDelegate=_reportingInfoDelegate;
- (void).cxx_destruct;
- (BOOL)report;
- (id)reportingURLWithQueryParameters:(id)arg1;
- (id)commonQueryParameters;
- (void)dealloc;

@end

