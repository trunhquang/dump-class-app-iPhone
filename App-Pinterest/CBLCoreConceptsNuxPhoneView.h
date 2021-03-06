//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class CBLCoreConcepsNuxBrowserTextView, CBLCoreConceptsNuxExperienceStepData, IFTTTAnimator, UIButton, UIImageView, UIView;

@interface CBLCoreConceptsNuxPhoneView : CBLTraitCollectionView
{
    IFTTTAnimator *_animator;
    UIImageView *_phoneImageView;
    UIView *_phoneContentView;
    UIImageView *_pinOne;
    UIImageView *_pinTwo;
    UIImageView *_pinThree;
    UIImageView *_pinFour;
    UIButton *_pinItButton;
    CBLCoreConcepsNuxBrowserTextView *_textOne;
    CBLCoreConcepsNuxBrowserTextView *_textTwo;
    CBLCoreConcepsNuxBrowserTextView *_textThree;
    CBLCoreConcepsNuxBrowserTextView *_textFour;
    CBLCoreConcepsNuxBrowserTextView *_textFive;
    CBLCoreConceptsNuxExperienceStepData *_experienceData;
}

@property(retain, nonatomic) CBLCoreConceptsNuxExperienceStepData *experienceData; // @synthesize experienceData=_experienceData;
@property(retain, nonatomic) CBLCoreConcepsNuxBrowserTextView *textFive; // @synthesize textFive=_textFive;
@property(retain, nonatomic) CBLCoreConcepsNuxBrowserTextView *textFour; // @synthesize textFour=_textFour;
@property(retain, nonatomic) CBLCoreConcepsNuxBrowserTextView *textThree; // @synthesize textThree=_textThree;
@property(retain, nonatomic) CBLCoreConcepsNuxBrowserTextView *textTwo; // @synthesize textTwo=_textTwo;
@property(retain, nonatomic) CBLCoreConcepsNuxBrowserTextView *textOne; // @synthesize textOne=_textOne;
@property(retain, nonatomic) UIButton *pinItButton; // @synthesize pinItButton=_pinItButton;
@property(retain, nonatomic) UIImageView *pinFour; // @synthesize pinFour=_pinFour;
@property(retain, nonatomic) UIImageView *pinThree; // @synthesize pinThree=_pinThree;
@property(retain, nonatomic) UIImageView *pinTwo; // @synthesize pinTwo=_pinTwo;
@property(retain, nonatomic) UIImageView *pinOne; // @synthesize pinOne=_pinOne;
@property(retain, nonatomic) UIView *phoneContentView; // @synthesize phoneContentView=_phoneContentView;
@property(retain, nonatomic) UIImageView *phoneImageView; // @synthesize phoneImageView=_phoneImageView;
@property(retain, nonatomic) IFTTTAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)startAnimationSequenceWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForTransitioningViewInView:(id)arg1;
- (void)updateConstraints;
- (id)initWithExperienceData:(id)arg1;

@end

