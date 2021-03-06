//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AvatarView, QTMButton, QTMColorGroup, UIImage, UIImageView, UILabel, UIView;

@interface SpeedDialCellView : UIControl
{
    QTMColorGroup *dialColorGroup_;
    UIImageView *textLabelCard_;
    UIImageView *dialBackgroundImageView_;
    AvatarView *avatarView_;
    UIImage *dialBackgroundImage_;
    QTMButton *dial_;
    float labelOffsetY_;
    UIView *textContainer_;
    UILabel *textLabel_;
    float textRightMargin_;
}

@property(nonatomic) float textRightMargin; // @synthesize textRightMargin=textRightMargin_;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=textLabel_;
@property(readonly, nonatomic) UIView *textContainer; // @synthesize textContainer=textContainer_;
@property(nonatomic) float labelOffsetY; // @synthesize labelOffsetY=labelOffsetY_;
@property(readonly, nonatomic) QTMButton *dial; // @synthesize dial=dial_;
@property(retain, nonatomic) UIImage *dialBackgroundImage; // @synthesize dialBackgroundImage=dialBackgroundImage_;
@property(readonly, nonatomic) AvatarView *avatarView; // @synthesize avatarView=avatarView_;
- (void).cxx_destruct;
- (void)createSubviews;
@property(retain, nonatomic) id <JBTContactReference> contactReference; // @dynamic contactReference;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 dialColorGroup:(id)arg2;

@end

