//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTGenericSmartMail.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTParcelDelivery_DeliveryStatusEnum, NSString;

@protocol JBTParcelDelivery <JBTGenericSmartMail, NSObject, JavaObject>
- (JBTParcelDelivery_DeliveryStatusEnum *)getDeliveryStatus;
- (NSString *)getTotalPrice;
- (id <JBTOrganization>)getCarrier;
- (id <JBTOrganization>)getSeller;
- (id <JBTTime>)getExpectedArrivalDate;
- (id <JavaUtilList>)getProductsWithImagesWithInt:(int)arg1;
- (id <JavaUtilList>)getProducts;
- (NSString *)getTrackingNumber;
@end

