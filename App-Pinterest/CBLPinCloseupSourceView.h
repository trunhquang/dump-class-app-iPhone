//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPinCloseupBaseView.h"

@class UILabel;

@interface CBLPinCloseupSourceView : CBLPinCloseupBaseView
{
    id <CBLPinCloseupSourceViewDelegate> _delegate;
    UILabel *_sourceLabel;
}

+ (BOOL)shouldDisplayForPin:(id)arg1;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(nonatomic) __weak id <CBLPinCloseupSourceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cellTapped:(id)arg1;
- (id)delegateProtocol;
- (void)updateWithPinViewStates:(id)arg1 forPin:(id)arg2;
- (void)updateWithPin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
