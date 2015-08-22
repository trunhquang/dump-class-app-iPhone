//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KPClusteringControllerDelegate.h"
#import "MKMapViewDelegate.h"

@class CBLMapView, CBLPin, CBLRemoteModelCollection, KPClusteringController, NSMutableArray, NSString, UIButton, UITapGestureRecognizer;

@interface CBLBoardMapView : UIView <MKMapViewDelegate, KPClusteringControllerDelegate>
{
    BOOL _mapEnabled;
    id <CBLBoardMapViewDelegate> _delegate;
    CBLRemoteModelCollection *_pins;
    CBLMapView *_mapView;
    CBLPin *_selectedPin;
    NSMutableArray *_annotations;
    KPClusteringController *_clusteringController;
    UIButton *_userLocationButton;
    UIButton *_listButton;
    UITapGestureRecognizer *_selectedAnnotationViewTapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *selectedAnnotationViewTapRecognizer; // @synthesize selectedAnnotationViewTapRecognizer=_selectedAnnotationViewTapRecognizer;
@property(retain, nonatomic) UIButton *listButton; // @synthesize listButton=_listButton;
@property(retain, nonatomic) UIButton *userLocationButton; // @synthesize userLocationButton=_userLocationButton;
@property(retain, nonatomic) KPClusteringController *clusteringController; // @synthesize clusteringController=_clusteringController;
@property(retain, nonatomic) NSMutableArray *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) CBLPin *selectedPin; // @synthesize selectedPin=_selectedPin;
@property(nonatomic) BOOL mapEnabled; // @synthesize mapEnabled=_mapEnabled;
@property(readonly, nonatomic) CBLMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) CBLRemoteModelCollection *pins; // @synthesize pins=_pins;
@property(nonatomic) __weak id <CBLBoardMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapClusteredPinAnnotationView:(id)arg1;
- (void)didTapSelectedAnnotationView:(id)arg1;
- (void)zoomToFitMapWithAnnotations:(id)arg1 insets:(struct UIEdgeInsets)arg2 animated:(BOOL)arg3;
- (void)clusteringController:(id)arg1 configureAnnotationForDisplay:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)zoomToDetailedZoomLevelAnimated:(BOOL)arg1;
- (void)zoomToDefaultZoomLevelAnimated:(BOOL)arg1;
- (void)deselectAllAnnotations;
@property(copy, nonatomic) NSString *mapId;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
