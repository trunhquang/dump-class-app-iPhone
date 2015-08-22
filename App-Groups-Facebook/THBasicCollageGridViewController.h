//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBGroupsReactListener.h"
#import "THPhotosCollageGridDataSourceDelegate.h"
#import "THPhotosCollageGridViewControllerProtocol.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBGridViewLayout, FBTransientViewStateManager, FBUserSession, NSString, THBasicCollageGridDataSource, UICollectionView;

@interface THBasicCollageGridViewController : UIViewController <THPhotosCollageGridDataSourceDelegate, UICollectionViewDelegate, FBGroupsReactListener, UIGestureRecognizerDelegate, THPhotosCollageGridViewControllerProtocol>
{
    id <FBIntentHandler> _intentHandler;
    FBGridViewLayout *_layout;
    FBTransientViewStateManager *_viewStateManager;
    BOOL _shouldRefetch;
    FBUserSession *_session;
    UICollectionView *_collectionView;
    THBasicCollageGridDataSource *_dataSource;
}

@property(retain, nonatomic) THBasicCollageGridDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)didDeleteSory:(id)arg1;
- (id)viewForEmptyStateWithFrame:(struct CGRect)arg1;
- (void)initializeDataSource;
- (void)reloadPhotos;
- (void)invalidateData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didAddPhotosAtStartIndex:(int)arg1 endIndex:(int)arg2 error:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithSession:(id)arg1 intentHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

