//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GBTSwipeableTableViewCell.h"

#import "CacheableHeightForNugget.h"
#import "CellBackViewDelegate.h"
#import "ContactHandler.h"
#import "NIRecyclableView.h"
#import "Swipeable.h"
#import "ThumbnailSupport.h"

@class CardCarouselView, NSArray, NSMutableDictionary, NSString, SmartMailInteractionForwarder;

@interface ThreadCell : GBTSwipeableTableViewCell <CellBackViewDelegate, CacheableHeightForNugget, ContactHandler, NIRecyclableView, Swipeable, ThumbnailSupport>
{
    NSMutableDictionary *accessibilityActionThreadActionMap_;
    SmartMailInteractionForwarder *forwarder_;
    unsigned int cellContext_;
    id <ThreadCellDelegate> delegate_;
}

+ (float)heightForObject:(id)arg1 width:(float)arg2;
+ (BOOL)hasCacheableHeightForNugget:(id)arg1;
+ (Class)backViewClass;
+ (Class)frontViewClass;
@property(nonatomic) __weak id <ThreadCellDelegate> delegate; // @synthesize delegate=delegate_;
@property(nonatomic) unsigned int cellContext; // @synthesize cellContext=cellContext_;
- (void).cxx_destruct;
- (void)didSelectAccessibilityCustomAction:(id)arg1;
- (void)updateAccessibilityActions;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
@property(copy, nonatomic) NSArray *swipeActions;
- (void)cellFrontView:(id)arg1 didInvokeAction:(unsigned int)arg2;
- (void)cellBackView:(id)arg1 didInvokeAction:(unsigned int)arg2;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate;
- (void)setAvatarContact:(id)arg1;
@property(readonly, nonatomic) CardCarouselView *cardCarouselView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSString *reuseIdentifier;
@property(readonly) Class superclass;

@end

