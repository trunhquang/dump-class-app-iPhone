//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBStickerUserSettings.h"

@class FBUserPreferences, NSString;

@interface FBStickerUserSettings : NSObject <FBStickerUserSettings>
{
    FBUserPreferences *_userPreferences;
    unsigned int _layoutIdiom;
}

- (void).cxx_destruct;
- (void)saveSettings;
- (id)getStickerManagerStorageFilename;
- (void)setStickerManagerStorageFilename:(id)arg1;
- (id)getRecentStickerUsageCounter;
- (void)setRecentStickerUsageCounter:(id)arg1;
- (void)setStickerStoreLastViewed:(double)arg1;
- (double)getStickerStoreLastViewed;
- (unsigned long long)getLastSelectedStickerPackTabFbId;
- (void)setLastSelectedStickerPackTabFbId:(unsigned long long)arg1;
- (BOOL)getHasOpenedStickerSearch;
- (void)setHasOpenedStickerSearch:(BOOL)arg1;
- (id)initWithSession:(id)arg1 layoutIdiom:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
