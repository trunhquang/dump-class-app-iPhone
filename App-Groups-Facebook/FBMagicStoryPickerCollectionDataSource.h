//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMagicStoryMemoizedCollectionIndexData, FBUserSession, NSArray;

@interface FBMagicStoryPickerCollectionDataSource : NSObject
{
    FBUserSession *_session;
    BOOL _fbAssetsLibraryProcessed;
    FBMagicStoryMemoizedCollectionIndexData *_collectionIndexData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *collections;
- (void)reloadData;
- (id)initWithSession:(id)arg1;

@end

