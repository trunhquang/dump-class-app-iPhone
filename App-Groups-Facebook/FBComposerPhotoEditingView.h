//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBFilteredPhotoAttachmentEditing.h"

@class FBCPUImageFilterState, FBMultiPickerPhotoAttachment, FBUserSession, NSString, UIButton;

@interface FBComposerPhotoEditingView : UIView <FBFilteredPhotoAttachmentEditing>
{
    UIButton *_unifiedMediaGalleryEntryButton;
    BOOL _filtersEnabled;
    FBUserSession *_session;
    FBMultiPickerPhotoAttachment *_attachment;
    id <FBComposerPhotoEditingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerPhotoEditingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBMultiPickerPhotoAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)_setUpAnimatedUnifiedMediaGalleryEntryButtonWithShouldShowIcon:(BOOL)arg1 shouldAnimate:(BOOL)arg2;
- (void)_didTapUnifiedGalleryViewButton;
@property(readonly, nonatomic) FBCPUImageFilterState *pendingFilterState;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFiltersEnabled:(BOOL)arg1 isFirstCell:(BOOL)arg2 unifiedMediaGalleryViewEnabled:(BOOL)arg3 session:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

