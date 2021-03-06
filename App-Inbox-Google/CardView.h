//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, SmartMailInteractionForwarder;

@interface CardView : UIView
{
    UIView *cardBackground_;
    SmartMailInteractionForwarder *forwarder_;
    UIView *snippetContainer_;
    id <CardViewDelegate> _delegate;
    NSArray *_snippetSpacing;
}

+ (id)defaultSnippetFont;
+ (void)initialize;
+ (float)snippetWidthForWidth:(float)arg1;
+ (float)snippetLeftMargin;
+ (float)imageWidth;
+ (float)textSpacing;
+ (float)textHeight;
@property(retain, nonatomic) NSArray *snippetSpacing; // @synthesize snippetSpacing=_snippetSpacing;
@property(nonatomic) __weak id <CardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate; // @dynamic smartMailDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)createSubviews;
- (id)snippetForAction:(id)arg1 addToContainer:(BOOL)arg2;
- (void)repositionSnippetContainerWithFlexibleWidth:(BOOL)arg1;
@property(readonly, nonatomic) UIView *snippetContainer;
- (void)cardTapped;
@property(readonly, nonatomic) UIView *cardBackground;
@property(readonly, nonatomic) SmartMailInteractionForwarder *forwarder; // @dynamic forwarder;

@end

