//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBComposerActivityTagPickerModelController, NSError;

@protocol FBComposerActivityTagPickerModelControllerDelegate
- (void)composerActivityTagPickerModelControllerDidFilterActivitiesLocally:(FBComposerActivityTagPickerModelController *)arg1;
- (void)composerActivityTagPickerModelController:(FBComposerActivityTagPickerModelController *)arg1 didFailToLoadActivitiesWithError:(NSError *)arg2;
- (void)composerActivityTagPickerModelControllerDidChangeActivities:(FBComposerActivityTagPickerModelController *)arg1 loadedFromCache:(BOOL)arg2;
@end

