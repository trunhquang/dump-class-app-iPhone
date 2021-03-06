//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAAnimation, UIColor, UIFont, UIImageView;

@interface MNNuxTraits : NSObject
{
    BOOL _isRoundedNux;
    BOOL _showX;
    UIColor *_backgroundColor;
    UIImageView *_arrowImageView;
    UIFont *_font;
    CAAnimation *_iconAnimation;
}

@property(retain, nonatomic) CAAnimation *iconAnimation; // @synthesize iconAnimation=_iconAnimation;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) BOOL showX; // @synthesize showX=_showX;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) BOOL isRoundedNux; // @synthesize isRoundedNux=_isRoundedNux;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;

@end

