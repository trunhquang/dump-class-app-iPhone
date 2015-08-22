//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSPDFAnnotationViewProtocol.h"

@class NSString, PSPDFAnnotation, PSPDFConfiguration, PSPDFLinkAnnotation, PSPDFPageView, UIButton;

@interface PSPDFLinkAnnotationBaseView : UIView <PSPDFAnnotationViewProtocol>
{
    PSPDFAnnotation *_annotation;
    unsigned int _zIndex;
    float _zoomScale;
    PSPDFPageView *_pageView;
    UIView *_contentView;
    UIButton *_activationButton;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *activationButton; // @synthesize activationButton=_activationButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak PSPDFPageView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) float zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) unsigned int zIndex; // @synthesize zIndex=_zIndex;
@property(retain, nonatomic) PSPDFAnnotation *annotation; // @synthesize annotation=_annotation;
- (void).cxx_destruct;
- (void)closeButtonPressed:(id)arg1;
- (id)createCloseButton;
- (void)addCloseButton;
- (BOOL)shouldShowCloseButton;
- (void)activationButtonPressed:(id)arg1;
- (id)defaultActivationButtonImage;
- (id)createActivationButton;
- (void)addActivationButton;
- (BOOL)shouldShowActivationButton;
- (id)options;
- (void)populateContentView;
- (BOOL)isContentViewVisible;
- (void)setContentViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
@property(readonly, nonatomic) PSPDFLinkAnnotation *linkAnnotation;
- (void)didChangePageBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) float PDFScale;
@property(retain, nonatomic) PSPDFConfiguration *configuration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(nonatomic, getter=isSelected) BOOL selected;
@property(readonly) Class superclass;

@end

