//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol FBSearchTypeaheadActivityListener <NSObject>

@optional
- (void)graphSearchScopedSearchModeChanged:(BOOL)arg1;
- (void)graphSearchKeyboardWillAppear;
- (void)graphSearchWillOpenSearchResults;
- (void)graphSearchNullStateRecentSearchesExpandedWithModels:(NSArray *)arg1;
- (void)graphSearchDidTapOnSuggestedSearchAboutButton;
- (void)graphSearchDidTapOnRecentSearchEditButton;
- (void)graphSearchDidTapOnSuggestion:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned int)arg2;
- (void)graphSearchSuggestionWillAppear:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned int)arg2;
- (void)graphSearchCustomContentWasUpdatedWithResultsSesionId:(NSString *)arg1 didReceivedProfilePivots:(BOOL)arg2;
- (void)graphSearchContentWasUpdated;
@end
