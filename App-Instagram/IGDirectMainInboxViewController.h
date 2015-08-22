//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGDirectPendingInboxDelegate.h"
#import "IGDirectThreadViewControllerDelegate.h"
#import "IGGenericMegaphoneViewDelegate.h"
#import "IGPullToRefreshProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGDirectEmptyInboxView, IGDirectPendingRequestsHeaderView, IGGenericMegaphone, IGGenericMegaphoneView, IGPlainTableView, IGPullToRefreshViewManager, NSArray, NSOrderedSet, NSString, UIBarButtonItem;

@interface IGDirectMainInboxViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGDirectPendingInboxDelegate, IGGenericMegaphoneViewDelegate, IGPullToRefreshProtocol, IGDirectThreadViewControllerDelegate>
{
    BOOL _isFetchingData;
    BOOL _loadingPreviousThreads;
    BOOL _hasLoadedOnce;
    NSOrderedSet *_threads;
    IGPlainTableView *_tableView;
    NSString *_nextMaxID;
    UIBarButtonItem *_createMessageButton;
    IGDirectPendingRequestsHeaderView *_pendingRequestsHeader;
    NSString *_countedAt;
    int _unseenShareCount;
    NSArray *_pendingRequestUsers;
    int _pendingRequestCount;
    IGPullToRefreshViewManager *_pullToRefreshViewManager;
    IGGenericMegaphone *_megaphone;
    IGGenericMegaphoneView *_megaphoneView;
    IGDirectEmptyInboxView *_emptyInboxView;
    int _unseenPendingRequestCount;
}

@property(nonatomic) int unseenPendingRequestCount; // @synthesize unseenPendingRequestCount=_unseenPendingRequestCount;
@property(retain, nonatomic) IGDirectEmptyInboxView *emptyInboxView; // @synthesize emptyInboxView=_emptyInboxView;
@property(nonatomic) BOOL hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
@property(retain, nonatomic) IGGenericMegaphoneView *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
@property(retain, nonatomic) IGGenericMegaphone *megaphone; // @synthesize megaphone=_megaphone;
@property(retain, nonatomic) IGPullToRefreshViewManager *pullToRefreshViewManager; // @synthesize pullToRefreshViewManager=_pullToRefreshViewManager;
@property(nonatomic) int pendingRequestCount; // @synthesize pendingRequestCount=_pendingRequestCount;
@property(retain, nonatomic) NSArray *pendingRequestUsers; // @synthesize pendingRequestUsers=_pendingRequestUsers;
@property(nonatomic) int unseenShareCount; // @synthesize unseenShareCount=_unseenShareCount;
@property(copy, nonatomic) NSString *countedAt; // @synthesize countedAt=_countedAt;
@property(retain, nonatomic) IGDirectPendingRequestsHeaderView *pendingRequestsHeader; // @synthesize pendingRequestsHeader=_pendingRequestsHeader;
@property(retain, nonatomic) UIBarButtonItem *createMessageButton; // @synthesize createMessageButton=_createMessageButton;
@property(nonatomic) BOOL loadingPreviousThreads; // @synthesize loadingPreviousThreads=_loadingPreviousThreads;
@property(copy, nonatomic) NSString *nextMaxID; // @synthesize nextMaxID=_nextMaxID;
@property(nonatomic) BOOL isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(retain, nonatomic) IGPlainTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSOrderedSet *threads; // @synthesize threads=_threads;
- (void).cxx_destruct;
- (void)megaphone:(id)arg1 didOpenURL:(id)arg2;
- (void)megaphoneDidDismiss:(id)arg1;
- (BOOL)shouldShowEmptyInbox;
- (void)reloadDataFromPullToRefresh;
- (id)currentActiveScrollView;
- (void)pendingInbox:(id)arg1 didUpdateThread:(id)arg2 withAccept:(BOOL)arg3;
- (void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3;
- (void)performHideForThread:(id)arg1;
- (BOOL)isFirstDelete;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 threadCellForInboxPath:(id)arg2;
- (void)configureCellForCurrentPendingRequests:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)cellProfilePictureVerticalPadding;
- (id)threadWithThreadId:(id)arg1;
- (void)replaceThread:(id)arg1 withThread:(id)arg2;
- (void)threadUpdated:(id)arg1;
- (void)onAppForeground:(id)arg1;
- (BOOL)shouldShowPendingInbox;
- (id)cachedThreads;
- (id)endpointPath;
- (void)loadMoreThreads;
- (void)updateNux;
- (void)refreshDataWithClearCount:(BOOL)arg1 withNextMaxID:(id)arg2 clearOperationCompletion:(CDUnknownBlockType)arg3 fetchCompletion:(CDUnknownBlockType)arg4;
- (void)pushToThreadWithThreadId:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (unsigned int)inboxSubscriptionStatus;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)sendNewDirect;
- (void)viewDidLoad;
- (void)refreshDataWithClearCount:(BOOL)arg1;
- (void)inboxUpdateNotificationReceived:(id)arg1;
- (void)threadUpdateNotificationReceived;
- (void)unseenShareCountUpdated:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
