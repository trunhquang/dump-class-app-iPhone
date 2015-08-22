//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGroupsMembersViewConfig.h"

@class NSString, UIColor;

@interface THGroupsMembersViewConfig : NSObject <FBGroupsMembersViewConfig>
{
    BOOL _showActionSheetToNonAdmins;
    UIColor *_cellSelectedColor;
    UIColor *_cellSeperatorColor;
    UIColor *_mediumGrayTextColor;
    UIColor *_searchBarBackgroundColor;
    UIColor *_sectionDividerColor;
    UIColor *_tableViewBackgroundColor;
    UIColor *_tintColor;
}

@property(nonatomic) BOOL showActionSheetToNonAdmins; // @synthesize showActionSheetToNonAdmins=_showActionSheetToNonAdmins;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *tableViewBackgroundColor; // @synthesize tableViewBackgroundColor=_tableViewBackgroundColor;
@property(retain, nonatomic) UIColor *sectionDividerColor; // @synthesize sectionDividerColor=_sectionDividerColor;
@property(retain, nonatomic) UIColor *searchBarBackgroundColor; // @synthesize searchBarBackgroundColor=_searchBarBackgroundColor;
@property(retain, nonatomic) UIColor *mediumGrayTextColor; // @synthesize mediumGrayTextColor=_mediumGrayTextColor;
@property(retain, nonatomic) UIColor *cellSeperatorColor; // @synthesize cellSeperatorColor=_cellSeperatorColor;
@property(retain, nonatomic) UIColor *cellSelectedColor; // @synthesize cellSelectedColor=_cellSelectedColor;
- (void).cxx_destruct;
- (id)sectionHeaderWithTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

