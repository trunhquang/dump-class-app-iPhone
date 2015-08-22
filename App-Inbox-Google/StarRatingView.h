//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImage;

@interface StarRatingView : UIView
{
    BOOL largeStars_;
    UIImage *starOffImage_;
    UIImage *starOnImage_;
    NSMutableArray *starViews_;
    id <StarRatingViewDelegate> delegate;
    unsigned int numStars_;
    unsigned int rating_;
}

@property(nonatomic) unsigned int rating; // @synthesize rating=rating_;
@property(nonatomic) unsigned int numStars; // @synthesize numStars=numStars_;
@property(nonatomic) id <StarRatingViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)starTapped:(id)arg1;
- (void)createSubviews;
- (id)createStar;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLargeStars:(BOOL)arg1;

@end

