//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "MNMessageCellElementAppearanceListener.h"

@class NSString;

@interface MNMessageCellElementAppearanceListenerAnnouncer : FBAnnouncerBase <MNMessageCellElementAppearanceListener>
{
}

- (void)failedViewDidDisappear:(id)arg1;
- (void)failedViewDidAppear:(id)arg1;
- (void)receiptViewDidDisappear:(id)arg1;
- (void)receiptViewDidUpdate:(id)arg1;
- (void)receiptViewDidAppear:(id)arg1;
- (void)profileImageViewDidDisappear:(id)arg1;
- (void)profileImageViewDidTap:(id)arg1;
- (void)profileImageViewDidAppear:(id)arg1;
- (void)messageCellWillDisappear:(id)arg1 withMessageRow:(id)arg2;
- (void)adminMessageCellWillAppear:(id)arg1 withMessageRow:(id)arg2;
- (void)messageCellWillAppear:(id)arg1 withMessageRow:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
