//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMemAlbum, NSMutableArray;

@interface FBComposerFilterAlbumsReductionTracker : NSObject
{
    FBMemAlbum *_selectedAlbum;
    NSMutableArray *_filteredAlbums;
}

@property(readonly, nonatomic) NSMutableArray *filteredAlbums; // @synthesize filteredAlbums=_filteredAlbums;
@property(retain, nonatomic) FBMemAlbum *selectedAlbum; // @synthesize selectedAlbum=_selectedAlbum;
- (void).cxx_destruct;
- (id)initWithFilteredAlbums:(id)arg1 selectedAlbum:(id)arg2;

@end

