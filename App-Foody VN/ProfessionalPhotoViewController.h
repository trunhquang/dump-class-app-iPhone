//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface ProfessionalPhotoViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    int loadingSesssion;
    int totalProPhoto;
    NSString *_resName;
    NSString *_resId;
    int _totalPhoto;
    UITableView *_tableView;
    NSMutableArray *_photoAlbums;
    id <ListLoaderProtocol> _dataListLoader;
}

@property(retain, nonatomic) id <ListLoaderProtocol> dataListLoader; // @synthesize dataListLoader=_dataListLoader;
@property(retain, nonatomic) NSMutableArray *photoAlbums; // @synthesize photoAlbums=_photoAlbums;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int totalPhoto; // @synthesize totalPhoto=_totalPhoto;
@property(copy, nonatomic) NSString *resId; // @synthesize resId=_resId;
@property(copy, nonatomic) NSString *resName; // @synthesize resName=_resName;
- (void).cxx_destruct;
- (void)loadMoreDataForScreen;
- (void)loadMoreContentForTableView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didTouchPhotoButton:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)initializeUIControls:(BOOL)arg1;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)trackPageView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

