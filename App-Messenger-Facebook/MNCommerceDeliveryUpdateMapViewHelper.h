//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKMapViewDelegate.h"

@class NSString;

@interface MNCommerceDeliveryUpdateMapViewHelper : NSObject <MKMapViewDelegate>
{
}

- (id)_viewModelLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3;
- (id)_greyLineLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3;
- (id)_blueLineLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4;
- (id)_annotationsForLocations:(id)arg1;
- (id)_lineWithLocations:(id)arg1 color:(id)arg2 alpha:(float)arg3;
- (id)_overlaysForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4;
- (id)mapViewModelForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
