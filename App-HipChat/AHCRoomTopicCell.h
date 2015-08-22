//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITextViewDelegate.h"

@class FLAnimatedImageView, NSString, UILabel, UITextView, UIView;

@interface AHCRoomTopicCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_roomTopicTextView;
    UILabel *_noTopicLabel;
    FLAnimatedImageView *_noTopicAnimatedImageView;
    UIView *_noTopicContainerView;
}

@property(nonatomic) __weak UIView *noTopicContainerView; // @synthesize noTopicContainerView=_noTopicContainerView;
@property(nonatomic) __weak FLAnimatedImageView *noTopicAnimatedImageView; // @synthesize noTopicAnimatedImageView=_noTopicAnimatedImageView;
@property(nonatomic) __weak UILabel *noTopicLabel; // @synthesize noTopicLabel=_noTopicLabel;
@property(nonatomic) __weak UITextView *roomTopicTextView; // @synthesize roomTopicTextView=_roomTopicTextView;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)setTextViewText:(id)arg1;
- (BOOL)shouldDisplayTextViewForText:(id)arg1;
- (void)setupNoTopicAnimatedImageView;
- (void)setupNoTopicLabel;
- (void)setupTextView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

