//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CBLTraitCollectionDelegate.h"

@class CBLTraitCollection, NSString;

@interface CBLTraitCollectionTableViewCell : UITableViewCell <CBLTraitCollectionDelegate>
{
    id <CBLTraitCollectionDelegate> _cblTraitCollectionDelegate;
    CBLTraitCollection *_cblTraitCollection;
}

@property(retain, nonatomic) CBLTraitCollection *cblTraitCollection; // @synthesize cblTraitCollection=_cblTraitCollection;
@property(nonatomic) __weak id <CBLTraitCollectionDelegate> cblTraitCollectionDelegate; // @synthesize cblTraitCollectionDelegate=_cblTraitCollectionDelegate;
- (void).cxx_destruct;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)createOrLoadCblTraitCollection;
- (void)moveFrameToPixelBounds;
- (void)removeFromSuperview;
- (void)_cblDidChangeOrientation:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

