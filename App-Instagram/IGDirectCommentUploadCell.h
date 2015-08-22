//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectCommentCell.h"

#import "IGDirectContentUploadCell.h"
#import "IGDirectContentUploadObserver.h"

@class NSString, UIButton, UIView;

@interface IGDirectCommentUploadCell : IGDirectCommentCell <IGDirectContentUploadObserver, IGDirectContentUploadCell>
{
    UIButton *_retryButton;
    UIView *_sendingDot;
}

@property(retain, nonatomic) UIView *sendingDot; // @synthesize sendingDot=_sendingDot;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)defaultTextColor;
- (id)fillColor;
- (float)loadingIndicatorOffset;
- (void)layoutSubviews;
- (void)notifyUploadFailureForUpload:(id)arg1;
- (void)performRetry;
- (void)showRetryMenu;
- (void)retryButtonTapped;
- (void)handleUploadCellTap;
- (id)timestampText;
- (void)setContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <IGDirectContentUpoadCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
