//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActiveChatItemCell.h"

@class UIImageView;

@interface ActiveChatRoomCell : ActiveChatItemCell
{
    UIImageView *_statusImageView;
}

@property(nonatomic) __weak UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
- (void).cxx_destruct;
- (void)updateRoomIconForChatRoom:(id)arg1;
- (void)updateContentForChatRoom:(id)arg1 app:(id)arg2;
- (void)prepareForReuse;

@end
