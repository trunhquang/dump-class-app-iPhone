//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@interface CBLPinScrollView : UICollectionView
{
    unsigned int _savedPage;
    struct CGSize _largeImagePointSize;
}

@property(nonatomic) unsigned int savedPage; // @synthesize savedPage=_savedPage;
@property(nonatomic) struct CGSize largeImagePointSize; // @synthesize largeImagePointSize=_largeImagePointSize;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

