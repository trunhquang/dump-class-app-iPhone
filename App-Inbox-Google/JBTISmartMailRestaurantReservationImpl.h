//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTISmartMailProtoBasedComponent.h"
#import "JBTRestaurantReservation.h"

@class JBTCCachedValue, JBTISmartMailGenericSmartMailHelper, JCSRestaurantReservation, NSString;

@interface JBTISmartMailRestaurantReservationImpl : JBTISmartMailAbstractSmartMailComponent <JBTRestaurantReservation, JBTISmartMailProtoBasedComponent>
{
    JCSRestaurantReservation *restaurantReservationProto_;
    JBTCCachedValue *address_;
    JBTCCachedValue *startTime_;
    JBTCCachedValue *image_;
    JBTISmartMailGenericSmartMailHelper *genericSmartMailHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getImage;
+ (id)__annotations_getBookingAgent;
+ (id)__annotations_getPartySize;
+ (id)__annotations_getStartTimeSec;
+ (id)__annotations_getPhoneNumber;
+ (id)__annotations_initWithJCSRestaurantReservation_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJavaUtilList_withJBTOrganization__params;
- (void)dealloc;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (BOOL)usesLegacyTypedSmartmailProto;
- (id)getSortTime;
- (id)getProto;
- (id)getImage;
- (void)addAdditionalActionsWithComGoogleCumulusCommonCollectImmutableList_Builder:(id)arg1;
- (id)getBookingAgent;
- (id)getAddress;
- (id)getPartySize;
- (id)getStartTime;
- (long long)getStartTimeSec;
- (id)getPhoneNumber;
- (id)getName;
- (id)initWithJCSRestaurantReservation:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJavaUtilList:(id)arg5 withJBTOrganization:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

