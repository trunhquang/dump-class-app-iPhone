//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface EditorHandleView : UIView
{
    UIView *ball_;
    BOOL isLeftHandle_;
    UIView *line_;
    float lineHeight_;
}

@property(nonatomic) float lineHeight; // @synthesize lineHeight=lineHeight_;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 isLeftHandle:(BOOL)arg2;

@end

