//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTISmartMailSmartMailLayoutFactory.h"

@class JBTISmartMailOrderDeliveryImpl, NSString;

@interface JBTISmartMailOrderDeliveryImpl_OrderDeliveryLayoutFactory : NSObject <JBTISmartMailSmartMailLayoutFactory>
{
    JBTISmartMailOrderDeliveryImpl *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTISmartMailOrderDeliveryImpl:(id)arg1;
- (id)getCollapsedRow;
- (id)getSectionDataStatusFromDeliveryStatusWithJBTParcelDelivery_DeliveryStatusEnum:(id)arg1 withJBTGenericSmartMailBadge:(id)arg2;
- (id)createPriceDetailWithNSString:(id)arg1;
- (id)createExpectedDeliveryDetailWithJBTTime:(id)arg1;
- (id)createItemNamesDetailWithBoolean:(BOOL)arg1;
- (id)getExpandedDetails;
- (id)getDeliveryStatusBadge;
- (id)getDateOrPrice;
- (id)getImages;
- (id)getTitle;
- (id)createSummaryLayout;
- (id)createDetailedLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

