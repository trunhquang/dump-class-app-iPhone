//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

@class CAGradientLayer, CBLCoreConceptsNuxSpotlightTextView, CBLMultilineLabel, CBLTriangleView, MASConstraint, UIButton, UIImageView, UIView;

@interface CBLSaveEducationViewController : CBLTraitCollectionViewController
{
    id <CBLSaveEducationViewControllerDelegate> _delegate;
    UIView *_dimView;
    UIView *_containerView;
    UIView *_roundedView;
    CBLTriangleView *_triangleView;
    UIView *_browserDimView;
    UIImageView *_browserImageView;
    UIImageView *_pinterestLogo;
    CBLMultilineLabel *_firstLabel;
    CBLCoreConceptsNuxSpotlightTextView *_spotlightText;
    UIButton *_okButton;
    CAGradientLayer *_bottomGradientLayer;
    CAGradientLayer *_topGradientLayer;
    MASConstraint *_browserImageTopConstraint;
    UIImageView *_spotlightImageView;
    UIImageView *_arrowImage;
    CBLMultilineLabel *_browserTextLabel;
}

@property(retain, nonatomic) CBLMultilineLabel *browserTextLabel; // @synthesize browserTextLabel=_browserTextLabel;
@property(retain, nonatomic) UIImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(retain, nonatomic) UIImageView *spotlightImageView; // @synthesize spotlightImageView=_spotlightImageView;
@property(retain, nonatomic) MASConstraint *browserImageTopConstraint; // @synthesize browserImageTopConstraint=_browserImageTopConstraint;
@property(retain, nonatomic) CAGradientLayer *topGradientLayer; // @synthesize topGradientLayer=_topGradientLayer;
@property(retain, nonatomic) CAGradientLayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) CBLCoreConceptsNuxSpotlightTextView *spotlightText; // @synthesize spotlightText=_spotlightText;
@property(retain, nonatomic) CBLMultilineLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UIImageView *pinterestLogo; // @synthesize pinterestLogo=_pinterestLogo;
@property(retain, nonatomic) UIImageView *browserImageView; // @synthesize browserImageView=_browserImageView;
@property(retain, nonatomic) UIView *browserDimView; // @synthesize browserDimView=_browserDimView;
@property(retain, nonatomic) CBLTriangleView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIView *roundedView; // @synthesize roundedView=_roundedView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *dimView; // @synthesize dimView=_dimView;
@property(nonatomic) __weak id <CBLSaveEducationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (id)attributedStringForText:(id)arg1;
- (void)startAnimationSequence;
- (void)didTapOk:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

