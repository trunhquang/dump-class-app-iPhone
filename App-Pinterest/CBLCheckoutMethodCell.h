//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel, UIView;

@interface CBLCheckoutMethodCell : UITableViewCell
{
    BOOL _checkmarkEnabled;
    BOOL _checkmarked;
    NSString *_labelString;
    UILabel *_methodLabel;
    UIImageView *_checkmarkView;
    UIView *_separatorView;
}

+ (float)heightForString:(id)arg1 width:(float)arg2;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) UILabel *methodLabel; // @synthesize methodLabel=_methodLabel;
@property(copy, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
@property(nonatomic, getter=isCheckmarked) BOOL checkmarked; // @synthesize checkmarked=_checkmarked;
@property(nonatomic, getter=isCheckmarkEnabled) BOOL checkmarkEnabled; // @synthesize checkmarkEnabled=_checkmarkEnabled;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

