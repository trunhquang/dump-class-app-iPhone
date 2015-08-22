//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UIGestureRecognizerDelegate.h"

@class FBImageDownloader, FBRichTextLayer, FBRichTextStateAccessibilityProvider, FBRichTextViewMenuController, NSArray, NSAttributedString, NSString, NSTextCheckingResult, UIColor, UIFont;

@interface FBRichTextView : UIControl <UIGestureRecognizerDelegate>
{
    UIFont *_font;
    FBRichTextStateAccessibilityProvider *_accessibilityProvider;
    struct _NSRange _highlightedRange;
    BOOL _providesAccessibleElements;
    BOOL _handlesOnlyEmbeddedActions;
    NSAttributedString *_attributedString;
    NSString *_accessibilityLabelString;
    UIColor *_color;
    NSAttributedString *_highlightedAttributedString;
    UIColor *_highlightedColor;
    NSArray *_menuItems;
    FBRichTextViewMenuController *_menuController;
    NSTextCheckingResult *_trackingTextCheckingResult;
    struct CGPoint _lastTouchPoint;
}

+ (struct CGSize)sizeWithRichTextConfig:(id)arg1;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 defaultColor:(struct CGColor *)arg4 defaultHorizontalAlignmentMode:(int)arg5 textShadowOffset:(struct CGSize)arg6 maximumNumberOfLines:(unsigned int)arg7 truncationMode:(unsigned int)arg8 truncationAttributedString:(id)arg9 isTruncated:(char *)arg10 numberOfLines:(unsigned int *)arg11;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 textShadowOffset:(struct CGSize)arg4 maximumNumberOfLines:(unsigned int)arg5 truncationMode:(unsigned int)arg6 truncationAttributedString:(id)arg7;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3 maximumNumberOfLines:(unsigned int)arg4 truncationMode:(unsigned int)arg5;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2 defaultFont:(id)arg3;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (struct CGSize)sizeWithAttributedString:(id)arg1 forWidth:(float)arg2;
+ (struct CGSize)sizeWithAttributedString:(id)arg1;
+ (Class)layerClass;
@property(retain, nonatomic) NSTextCheckingResult *trackingTextCheckingResult; // @synthesize trackingTextCheckingResult=_trackingTextCheckingResult;
@property(retain, nonatomic) FBRichTextViewMenuController *menuController; // @synthesize menuController=_menuController;
@property(copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) BOOL handlesOnlyEmbeddedActions; // @synthesize handlesOnlyEmbeddedActions=_handlesOnlyEmbeddedActions;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(copy, nonatomic) NSAttributedString *highlightedAttributedString; // @synthesize highlightedAttributedString=_highlightedAttributedString;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *accessibilityLabelString; // @synthesize accessibilityLabelString=_accessibilityLabelString;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) BOOL providesAccessibleElements; // @synthesize providesAccessibleElements=_providesAccessibleElements;
- (void).cxx_destruct;
- (BOOL)menuControlIsVisible;
- (BOOL)textIsTruncated;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_sendActionsForControlEvents:(unsigned int)arg1 withEvent:(id)arg2;
- (unsigned int)textIndexAtPoint:(struct CGPoint)arg1;
- (id)textCheckingResultAtPoint:(struct CGPoint)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibleElements;
- (id)accessibilityLabel;
@property(nonatomic) unsigned int verticalAlignmentMode;
@property(nonatomic) unsigned int truncationMode;
@property(copy, nonatomic) NSAttributedString *truncationAttributedString;
@property(nonatomic) struct CGSize textShadowOffset;
@property(retain, nonatomic) UIColor *textShadowColor;
@property(nonatomic) float textShadowBlur;
@property(readonly, nonatomic) FBRichTextLayer *richTextLayer;
@property(nonatomic) unsigned int maximumNumberOfLines;
@property(nonatomic) int horizontalAlignmentMode;
@property(nonatomic) struct _NSRange highlightedRange;
- (void)setHighlighted:(BOOL)arg1;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) unsigned int displayMode;
- (void)setOpaque:(BOOL)arg1;
- (BOOL)isOpaque;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) FBImageDownloader *imageDownloader;
@property(copy, nonatomic) NSString *text;
@property(readonly, copy) NSString *description;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

