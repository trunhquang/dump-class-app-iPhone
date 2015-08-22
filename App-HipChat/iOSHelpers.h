//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Helpers.h"

@interface iOSHelpers : Helpers
{
}

+ (id)createBarButtonForTarget:(id)arg1 withTitle:(id)arg2 withAction:(SEL)arg3 withSize:(struct CGSize)arg4;
+ (id)createBarButtonForTarget:(id)arg1 withImageNamed:(id)arg2 withAction:(SEL)arg3 withSize:(struct CGSize)arg4;
+ (id)flattenHTML:(id)arg1;
+ (void)selectTextForInput:(id)arg1 atRange:(struct _NSRange)arg2;
+ (id)resizeImage:(id)arg1 maxDimension:(int)arg2;
+ (id)getNoResultsCell;
+ (id)getLoadingCell;
+ (id)iconForRoomWithPrivacy:(BOOL)arg1 withLightVersion:(BOOL)arg2;
+ (id)escape:(id)arg1;
+ (void)configureCell:(id)arg1 forUser:(id)arg2 options:(int)arg3;
+ (void)configureCell:(id)arg1 forUser:(id)arg2;
+ (void)configureCell:(id)arg1 forRoom:(id)arg2 withLightVersion:(BOOL)arg3;
+ (void)configureCellForLobby:(id)arg1;

@end
