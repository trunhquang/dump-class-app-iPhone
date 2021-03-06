//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBComposerPrivacySetting, FBFacepileView, UIImageView, UILabel;

@interface FBComposerBottomAudienceSelectorPrivacyView : UIView
{
    UIView *_containerView;
    UIImageView *_backgroundView;
    UILabel *_audienceLabel;
    UILabel *_descriptionLabel;
    FBFacepileView *_facepileView;
    UILabel *_facepileLabel;
    UIImageView *_facepileLabelBackgroundView;
    BOOL _backgroundViewHidden;
    FBComposerPrivacySetting *_privacySetting;
}

+ (float)preferredPrivacyViewHeight;
@property(retain, nonatomic) FBComposerPrivacySetting *privacySetting; // @synthesize privacySetting=_privacySetting;
@property(nonatomic) BOOL backgroundViewHidden; // @synthesize backgroundViewHidden=_backgroundViewHidden;
- (void).cxx_destruct;
- (void)_configurePrivacyLabels;
- (void)layoutSubviews;
- (id)initWithImageDownloader:(id)arg1;

@end

