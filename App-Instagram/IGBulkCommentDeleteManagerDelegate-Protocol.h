//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGBulkCommentDeleteManager;

@protocol IGBulkCommentDeleteManagerDelegate <NSObject>
- (void)commentDeleteManagerDidFailToDeleteComments:(IGBulkCommentDeleteManager *)arg1;
- (void)commentDeleteManagerDidFinishCommentDeletion:(IGBulkCommentDeleteManager *)arg1;
- (void)commentDeleteManagerDidStartCommentDeletion:(IGBulkCommentDeleteManager *)arg1;
- (void)commentDeleteManagerDidAddCommentToDelete:(IGBulkCommentDeleteManager *)arg1 numberOfCommentsToDelete:(int)arg2;
@end
