//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCCachedData.h"

@class AccountContext, GCDMulticastDelegate<EmoticonListDelegate>, HipChatApp, ImageManager, NSDate, NSString;

@interface EmoticonList : HCCachedData
{
    AccountContext *_accountContext;
    GCDMulticastDelegate<EmoticonListDelegate> *_multicastDelegate;
    ImageManager *_imageManager;
    HipChatApp *_app;
    NSString *_emoticonBasePath;
    NSDate *_emoticonFetchRequestStartDate;
}

@property(retain, nonatomic) NSDate *emoticonFetchRequestStartDate; // @synthesize emoticonFetchRequestStartDate=_emoticonFetchRequestStartDate;
@property(copy, nonatomic) NSString *emoticonBasePath; // @synthesize emoticonBasePath=_emoticonBasePath;
@property(nonatomic) __weak HipChatApp *app; // @synthesize app=_app;
@property(retain, nonatomic) ImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(retain, nonatomic) GCDMulticastDelegate<EmoticonListDelegate> *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
- (void).cxx_destruct;
- (Class)objectClass;
- (id)generateObjectWithData:(id)arg1;
- (id)storeName;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)fetchEmoticonImages;
- (BOOL)shouldPrefetchImages;
- (BOOL)storeUsesSharedDefaults;
- (void)removeEmoticon:(id)arg1;
- (void)updateEmoticonsWithQuery:(id)arg1 pruneExisting:(BOOL)arg2;
- (BOOL)loadFromStore;
- (void)handleEmoticonPush:(id)arg1;
- (void)handleEmoticonsFetch:(id)arg1;
- (id)emoticonsShortcutsMatchingString:(id)arg1;
- (id)emoticonForShortcut:(id)arg1;
- (void)fetchEmoticons;
- (void)clearData;
- (id)initWithAccountContext:(id)arg1 imageManager:(id)arg2;

@end

