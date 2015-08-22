//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FBLocalizedDateFormats, FBMemMessageThread, FBMemPerson, FBNetworkImageView, FBUserSession, NSDateFormatter, NSMutableArray, UILabel, UIView;

@interface THGroupChatThreadCell : UITableViewCell
{
    FBMemMessageThread *_chatThread;
    FBMemPerson *_person;
    FBUserSession *_session;
    FBNetworkImageView *_coverPhotoImageView;
    UIView *_facepileImageView;
    NSMutableArray *_peopleProfileImageViews;
    NSMutableArray *_peopleProfileImageURLs;
    UILabel *_chatThreadNameLabel;
    UILabel *_dateTimeLabel;
    UILabel *_chatThreadSubtitle;
    FBLocalizedDateFormats *_localizedDateFormats;
    NSDateFormatter *_formatter;
    float _chatThreadNameFontSize;
}

- (void).cxx_destruct;
- (void)_formatDateTimeLabel;
- (void)_setupPeopleImageView:(id)arg1;
- (void)_layoutFacepile:(unsigned int)arg1;
- (void)_setUnreadStatus:(BOOL)arg1;
- (void)_fillContents;
- (void)updateCellContents:(id)arg1 person:(id)arg2;
- (void)layoutSubviews;
- (void)setChatThread:(id)arg1;
- (void)prepareForReuse;
- (id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

