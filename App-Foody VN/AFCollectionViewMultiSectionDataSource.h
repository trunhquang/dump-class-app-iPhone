//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class NSArray, NSString;

@interface AFCollectionViewMultiSectionDataSource : NSObject <UICollectionViewDataSource>
{
    NSArray *_sections;
    id <AFCollectionViewMultiSectionDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <AFCollectionViewMultiSectionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (id)sectionDataAtIndexPath:(id)arg1;
- (id)supplementaryDataObjectOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)cellDataObjectAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

