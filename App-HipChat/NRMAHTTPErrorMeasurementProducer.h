//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMAMeasurementProducer.h"

@interface NRMAHTTPErrorMeasurementProducer : NRMAMeasurementProducer
{
}

- (void)produceMeasurementWithURL:(id)arg1 httpMethod:(id)arg2 timeOfError:(double)arg3 statusCode:(int)arg4;
- (void)produceMeasurementWithURL:(id)arg1 httpMethod:(id)arg2 timeOfError:(double)arg3 statusCode:(int)arg4 response:(id)arg5;
- (void)produceMeasurementWithURL:(id)arg1 httpMethod:(id)arg2 timeOfError:(double)arg3 statusCode:(int)arg4 response:(id)arg5 wanType:(id)arg6 parameters:(id)arg7;
- (id)init;
- (id)initWithType:(int)arg1;

@end

