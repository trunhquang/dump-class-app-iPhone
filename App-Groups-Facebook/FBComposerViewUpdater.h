//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerCompositionStateChangedListener.h"

@class FBComposerView, FBUserSession, NSString;

@interface FBComposerViewUpdater : NSObject <FBComposerCompositionStateChangedListener>
{
    struct vector<FBComposer::CollectionChangeSetUpdating::ItemUpdateHandler<FBComposerCompositionState *, FBComposerAttachmentsBarItem *>, std::__1::allocator<FBComposer::CollectionChangeSetUpdating::ItemUpdateHandler<FBComposerCompositionState *, FBComposerAttachmentsBarItem *>>> _attachmentsBarUpdateItems;
    FBComposerView *_composerView;
    FBUserSession *_userSession;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (id)initWithComposerView:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

