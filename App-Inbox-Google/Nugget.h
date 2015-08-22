//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NICellObject.h"

@class NSString;

@interface Nugget : NSObject <NICellObject>
{
    BOOL searchOneBox;
    NSString *account_;
    id <JBTClusteredItems> clusteredItems_;
    id <JBTConversation> conversation_;
    id <JBTItem> item_;
    id <JBTSearchContact> searchContact_;
    id <JBTSmartMailItem> smartMailItem_;
    id <JBTTask> standaloneTask_;
    id <JBTTopicCardItem> topicCardItem_;
    id <JBTOneBoxItem> oneBoxItem_;
}

@property(readonly, nonatomic) id <JBTOneBoxItem> oneBoxItem; // @synthesize oneBoxItem=oneBoxItem_;
@property(readonly, nonatomic) id <JBTTopicCardItem> topicCardItem; // @synthesize topicCardItem=topicCardItem_;
@property(readonly, nonatomic) id <JBTTask> standaloneTask; // @synthesize standaloneTask=standaloneTask_;
@property(readonly, nonatomic) id <JBTSmartMailItem> smartMailItem; // @synthesize smartMailItem=smartMailItem_;
@property(nonatomic, getter=isSearchOneBox) BOOL searchOneBox; // @synthesize searchOneBox;
@property(readonly, nonatomic) id <JBTSearchContact> searchContact; // @synthesize searchContact=searchContact_;
@property(readonly, nonatomic) id <JBTItem> item; // @synthesize item=item_;
@property(readonly, nonatomic) id <JBTConversation> conversation; // @synthesize conversation=conversation_;
@property(readonly, nonatomic) id <JBTClusteredItems> clusteredItems; // @synthesize clusteredItems=clusteredItems_;
@property(readonly, copy, nonatomic) NSString *account; // @synthesize account=account_;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (Class)cellClass;
- (id)reusableCellIdentifier;
- (id)smartMailComponent;
- (BOOL)isIncompleteTask;
- (BOOL)isStandaloneTask;
- (BOOL)isSingleDraft;
@property(readonly, nonatomic) id <JBTTask> task;
- (BOOL)hasSameId:(id)arg1;
- (id)initWithItem:(id)arg1 forAccount:(id)arg2;
- (id)initWithItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

