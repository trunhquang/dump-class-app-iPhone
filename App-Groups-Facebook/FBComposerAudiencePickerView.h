//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBComposerAudienceTokenizerView, UITableView;

@interface FBComposerAudiencePickerView : UIView
{
    UITableView *_tableView;
    FBComposerAudienceTokenizerView *_tokenizerView;
}

@property(readonly, nonatomic) FBComposerAudienceTokenizerView *tokenizerView; // @synthesize tokenizerView=_tokenizerView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

