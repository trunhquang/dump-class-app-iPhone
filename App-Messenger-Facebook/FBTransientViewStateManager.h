//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBErrorView, FBLoadingIndicatorView, FBTransientViewStateParams, NSString, UIButton, UIColor, UIImage, UIView;

@interface FBTransientViewStateManager : NSObject
{
    UIView *_view;
    unsigned int _viewState;
    FBLoadingIndicatorView *_loadingView;
    FBErrorView *_errorView;
    NSString *_titleForError;
    NSString *_titleForEmpty;
    UIImage *_imageForEmptyView;
    unsigned int _showOption;
    FBTransientViewStateParams *_params;
    float _textMarginX;
    float _textOffsetY;
    UIColor *_shadowColor;
    float _fontSize;
    struct CGSize _shadowOffset;
    BOOL _spinnerAtTopForLoading;
    BOOL _showsTextShadow;
    UIView *_customEmptyView;
    UIView *_customErrorView;
    NSString *_subtitleForEmpty;
    NSString *_buttonTextForEmpty;
    NSString *_subtitleForError;
    NSString *_buttonTextForError;
    NSString *_titleForLoading;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    int _spinnerStyle;
    UIColor *_spinnerTintColor;
    struct CGRect _viewStateFrame;
}

@property(retain, nonatomic) FBErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) FBLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIColor *spinnerTintColor; // @synthesize spinnerTintColor=_spinnerTintColor;
@property(nonatomic) int spinnerStyle; // @synthesize spinnerStyle=_spinnerStyle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL showsTextShadow; // @synthesize showsTextShadow=_showsTextShadow;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImage *imageForEmptyView; // @synthesize imageForEmptyView=_imageForEmptyView;
@property(nonatomic) BOOL spinnerAtTopForLoading; // @synthesize spinnerAtTopForLoading=_spinnerAtTopForLoading;
@property(copy, nonatomic) NSString *titleForLoading; // @synthesize titleForLoading=_titleForLoading;
@property(copy, nonatomic) NSString *buttonTextForError; // @synthesize buttonTextForError=_buttonTextForError;
@property(copy, nonatomic) NSString *subtitleForError; // @synthesize subtitleForError=_subtitleForError;
@property(copy, nonatomic) NSString *titleForError; // @synthesize titleForError=_titleForError;
@property(copy, nonatomic) NSString *buttonTextForEmpty; // @synthesize buttonTextForEmpty=_buttonTextForEmpty;
@property(copy, nonatomic) NSString *subtitleForEmpty; // @synthesize subtitleForEmpty=_subtitleForEmpty;
@property(copy, nonatomic) NSString *titleForEmpty; // @synthesize titleForEmpty=_titleForEmpty;
@property(retain, nonatomic) UIView *customErrorView; // @synthesize customErrorView=_customErrorView;
@property(retain, nonatomic) UIView *customEmptyView; // @synthesize customEmptyView=_customEmptyView;
@property(readonly, nonatomic) unsigned int showOption; // @synthesize showOption=_showOption;
@property(nonatomic) unsigned int viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_updateView;
- (void)_clearSubViews;
- (void)_configureView;
- (void)updateViewStateFrameAnimated:(struct CGRect)arg1 duration:(double)arg2 curve:(int)arg3;
@property(nonatomic) struct CGRect viewStateFrame; // @synthesize viewStateFrame=_viewStateFrame;
@property(readonly, retain, nonatomic) UIButton *buttonForError;
@property(readonly, retain, nonatomic) UIButton *buttonForEmpty;
- (id)initWithParams:(id)arg1;
- (id)initWithShowOption:(unsigned int)arg1;
- (id)init;

@end
