//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface RKModalFullscreenView : UIView
{
    id <FBModalPresentationLayer> _modalLayer;
    UIView *_contentView;
}

- (void).cxx_destruct;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (id)reactSubviews;
- (id)contentView;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithModalLayer:(id)arg1;

@end

