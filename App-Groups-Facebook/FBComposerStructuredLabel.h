//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBComposerHighlightedText, FBNearbyPlace, FBNetworkImageView, FBTaggableActivityComposition, FBTaggableActivityCompositionIcon, FBTypedNSArrayOfFBComposerPerson, FBUserSession, NSMutableArray, UIColor, UIFont;

@interface FBComposerStructuredLabel : UIView
{
    FBNearbyPlace *_place;
    FBTaggableActivityComposition *_taggedActivity;
    FBTaggableActivityCompositionIcon *_activityIcon;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsers;
    FBUserSession *_session;
    NSMutableArray *_labels;
    FBNetworkImageView *_taggableActivityIcon;
    NSMutableArray *_tokenViews;
    struct CGPoint _offsetPoint;
    UIColor *_highlightColor;
    UIColor *_supportingColor;
    UIFont *_font;
    UIFont *_highlightFont;
    struct _NSRange _friendsRange;
    struct _NSRange _placeRange;
    struct _NSRange _taggedActivityRange;
    struct _NSRange _activityIconRange;
    FBComposerHighlightedText *_ogRobotext;
    BOOL _showEmDash;
    BOOL _disabled;
    id <FBComposerStructuredLabelDelegate> _delegate;
    float _activityIconSize;
    float _textInset;
    float _lineSpacing;
    int _endPunctuation;
    UIColor *_disabledSuffixColor;
}

@property(retain, nonatomic, setter=setOGRobotext:) FBComposerHighlightedText *ogRobotext; // @synthesize ogRobotext=_ogRobotext;
@property(retain, nonatomic) UIFont *highlightFont; // @synthesize highlightFont=_highlightFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *disabledSuffixColor; // @synthesize disabledSuffixColor=_disabledSuffixColor;
@property(retain, nonatomic) UIColor *supportingColor; // @synthesize supportingColor=_supportingColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) int endPunctuation; // @synthesize endPunctuation=_endPunctuation;
@property(nonatomic) BOOL showEmDash; // @synthesize showEmDash=_showEmDash;
@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) float textInset; // @synthesize textInset=_textInset;
@property(nonatomic) float activityIconSize; // @synthesize activityIconSize=_activityIconSize;
@property(nonatomic) __weak id <FBComposerStructuredLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint offsetPoint; // @synthesize offsetPoint=_offsetPoint;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)accessibilityLabel;
- (float)_lineHeight;
- (id)_userWithShortestName:(id)arg1;
- (BOOL)_isClingingView:(id)arg1;
- (void)_addLabelsForTaggedActivity:(id)arg1;
- (void)_addIconForTaggedActivity:(id)arg1;
- (void)_addLabelsForPlace:(id)arg1;
- (void)_addLabelsForFriends:(id)arg1;
- (void)_addLabelsForObject:(id)arg1;
- (void)_addLabelsForRobotext:(id)arg1;
- (void)_addLabelsWithFormat:(id)arg1 objects:(id)arg2;
- (id)_createLabelFromToken:(id)arg1 color:(id)arg2 font:(id)arg3;
- (void)_tokenizeText:(id)arg1 tokenizationPerformedBlock:(CDUnknownBlockType)arg2;
- (void)_addLabelWithText:(id)arg1 color:(id)arg2 font:(id)arg3;
- (void)_updateSummaryLabel;
- (void)_clear;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)hasOGRobotext;
@property(readonly, nonatomic) BOOL hasText;
- (void)updateTaggedUsers:(id)arg1;
- (void)updateTaggedActivity:(id)arg1;
- (void)updatePlace:(id)arg1;
- (void)_lineBreakForLeftCursor:(struct CGPoint *)arg1 rightCursor:(struct CGPoint *)arg2 withLineWidth:(float)arg3;
- (void)_stickRTLtoLTRWithLeftCursor:(struct CGPoint)arg1 rightCursor:(struct CGPoint)arg2 RTLTokensOnCurrentLineRange:(struct _NSRange)arg3 andTokenLayoutFrames:(id)arg4;
- (void)_computeLayoutForRTLToken:(id)arg1 atIndex:(unsigned int)arg2 withLeftCursor:(struct CGPoint *)arg3 rightCursor:(struct CGPoint *)arg4 lineWidth:(float)arg5 RTLTokensOnCurrentLineRange:(struct _NSRange *)arg6 andTokenLayoutFrames:(id)arg7;
- (void)_computeLayoutForLTRToken:(id)arg1 atIndex:(unsigned int)arg2 withLeftCursor:(struct CGPoint *)arg3 rightCursor:(struct CGPoint *)arg4 lineWidth:(float)arg5 andTokenLayoutFrames:(id)arg6;
- (void)_transitionFromRTLToLTRWithLeftCursor:(struct CGPoint *)arg1 rightCursor:(struct CGPoint *)arg2 RTLTokensOnCurrentLineRange:(struct _NSRange)arg3 lineWidth:(float)arg4 xInset:(float)arg5 andTokenLayoutFrames:(id)arg6;
- (id)_computeTokenViewsLayoutForLineWidth:(float)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_layoutTokenViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

