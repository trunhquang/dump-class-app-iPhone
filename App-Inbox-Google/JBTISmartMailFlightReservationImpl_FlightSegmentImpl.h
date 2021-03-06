//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTFlightReservation_FlightSegment.h"

@class ComGoogleCommonBaseOptional, JBTCCachedValue, JBTISmartMailGenericSmartMailHelper, JBTISmartMailSmartMailComponentContextImpl, JCSAssignedId, JCSFlightReservation_FlightSegment, NSString;

@interface JBTISmartMailFlightReservationImpl_FlightSegmentImpl : JBTISmartMailAbstractSmartMailComponent <JBTFlightReservation_FlightSegment>
{
    JCSFlightReservation_FlightSegment *flightSegmentProto_;
    NSString *cachedAirlineCodeText_;
    NSString *cachedFlightNumberText_;
    id <JBTFlightReservation_FlightSegment_FlightEndPoint> departureEndPoint_;
    id <JBTFlightReservation_FlightSegment_FlightEndPoint> arrivalEndPoint_;
    ComGoogleCommonBaseOptional *originalArrivalEndPoint_;
    id <ComGoogleCumulusCommonUtilClock> clock_FlightSegmentImpl_;
    id <JBTISmartMailSmartMailCommandApplier> commandApplier_FlightSegmentImpl_;
    JBTISmartMailSmartMailComponentContextImpl *smartMailContextImpl_FlightSegmentImpl_;
    id <JavaUtilList> actionProtos_FlightSegmentImpl_;
    JCSAssignedId *assignedId_FlightSegmentImpl_;
    JBTISmartMailGenericSmartMailHelper *genericSmartMailHelper_;
    JBTCCachedValue *flightSegmentImageCachedValue_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getFlightNumber;
+ (id)__annotations_getCheckinUrl;
+ (id)__annotations_getFlightImage;
+ (id)__annotations_getArrivalCity;
+ (id)__annotations_getDepartureCity;
+ (id)__annotations_getArrivalAirportCode;
+ (id)__annotations_getDepartureAirportCode;
+ (id)__annotations_getArrivalTime;
+ (id)__annotations_getDepartureTime;
+ (id)__annotations_getBookingReference;
+ (id)__annotations_getOriginalArrivalEndPoint;
- (void)dealloc;
- (int)getFlightNumber;
- (id)getCheckinUrl;
- (id)getFlightImage;
- (id)getArrivalCity;
- (id)getDepartureCity;
- (id)getArrivalAirportCode;
- (id)getDepartureAirportCode;
- (id)getArrivalTime;
- (id)getDepartureTime;
- (BOOL)shouldExpireFlightStatus;
- (BOOL)usesLegacyTypedSmartmailProto;
- (id)getSortTime;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getActions;
- (id)getBookingReference;
- (id)getStatusCode;
- (id)getOriginalArrivalEndPoint;
- (id)getArrivalEndPoint;
- (id)getDepartureEndPoint;
- (id)getAirlineName;
- (id)getAirlineCode;
- (id)getFlightNumberText;
- (id)initWithJCSFlightReservation_FlightSegment:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleCumulusCommonUtilClock:(id)arg3 withJBTISmartMailSmartMailCommandApplier:(id)arg4 withJBTISmartMailSmartMailComponentContextImpl:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

