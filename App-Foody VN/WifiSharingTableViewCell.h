//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface WifiSharingTableViewCell : UITableViewCell
{
    UILabel *_name;
    UILabel *_password;
    UILabel *_datePost;
}

@property(nonatomic) __weak UILabel *datePost; // @synthesize datePost=_datePost;
@property(nonatomic) __weak UILabel *password; // @synthesize password=_password;
@property(nonatomic) __weak UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;

@end

