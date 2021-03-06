//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGGradientView, NSNumber, PHImageManager, PHImageRequestOptions, UIImageView, UILabel, UIView;

@interface IGGridViewCell : UICollectionViewCell
{
    BOOL _showSelectedOverlay;
    BOOL _inICloud;
    BOOL _isAssetPhoto;
    id _asset;
    PHImageManager *_imageManager;
    PHImageRequestOptions *_imageRequestOptions;
    UIImageView *_imageView;
    UIView *_selectedOverlay;
    int _requestID;
    UIImageView *_inICloudView;
    UIImageView *_slomoView;
    IGGradientView *_gradientView;
    UILabel *_durationLabel;
    struct CGSize _thumbnailSize;
}

@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) IGGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *slomoView; // @synthesize slomoView=_slomoView;
@property(retain, nonatomic) UIImageView *inICloudView; // @synthesize inICloudView=_inICloudView;
@property(nonatomic) BOOL isAssetPhoto; // @synthesize isAssetPhoto=_isAssetPhoto;
@property(nonatomic) BOOL inICloud; // @synthesize inICloud=_inICloud;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) UIView *selectedOverlay; // @synthesize selectedOverlay=_selectedOverlay;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL showSelectedOverlay; // @synthesize showSelectedOverlay=_showSelectedOverlay;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)dateFormatter;
- (id)accessibilityLabel;
- (BOOL)usePhotosFramework;
- (id)creationDate;
@property(readonly, nonatomic, getter=isHighFrameRate) BOOL highFrameRate;
@property(readonly, nonatomic) NSNumber *duration;
- (void)updateLabelVisibility;
- (void)setSelected:(BOOL)arg1;
- (void)cancelImageRequest;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

