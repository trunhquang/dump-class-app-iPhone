//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTGenericSmartMail.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTFlightReservation <JBTGenericSmartMail, NSObject, JavaObject>
- (id <JBTImage>)getFlightImage;
- (BOOL)isCompleted;
- (id <JBTFlightReservation_FlightSegment>)getNextFlightSegment;
- (id <JBTFlightReservation_FlightSegment>)getNextMostUrgentSegment;
- (id <JavaUtilList>)getRemainingFlightSegments;
- (id <JavaUtilList>)getFlightSegments;
@end

