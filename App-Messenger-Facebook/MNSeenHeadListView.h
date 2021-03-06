//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNSeenHeadView.h"

@class NSArray, NSString;

@interface MNSeenHeadListView : UIView <MNSeenHeadView>
{
    unsigned int _seenHeadSize;
    NSArray *_seenHeadViews;
}

@property(copy, nonatomic) NSArray *seenHeadViews; // @synthesize seenHeadViews=_seenHeadViews;
@property(nonatomic) unsigned int seenHeadSize; // @synthesize seenHeadSize=_seenHeadSize;
- (void).cxx_destruct;
- (void)_updateSeenHeadSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

