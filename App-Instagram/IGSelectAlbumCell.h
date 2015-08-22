//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, PHFetchResult, UIImage, UILabel;

@interface IGSelectAlbumCell : UITableViewCell
{
    PHFetchResult *_result;
    int _requestID;
    UIImage *_thumbnail;
    UILabel *_accessoryCountLabel;
}

@property(retain, nonatomic) UILabel *accessoryCountLabel; // @synthesize accessoryCountLabel=_accessoryCountLabel;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) PHFetchResult *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (struct UIEdgeInsets)layoutMargins;
@property(nonatomic) int assetCount;
@property(retain, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
