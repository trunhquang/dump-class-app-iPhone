//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CBLBoard, CBLBoardCellDisplayOptions, CBLBoardCellLayoutAttributes, CBLPinnerTile, UIImageView, UILabel;

@interface CBLBoardCellHeader : UIView
{
    CBLPinnerTile *_userAvatar;
    UILabel *_boardNamelabel;
    UILabel *_userLabel;
    UIImageView *_groupIcon;
    UIImageView *_secretIcon;
    UIImageView *_placesIcon;
    CBLBoard *_board;
    CBLBoardCellLayoutAttributes *_layoutAttributes;
    CBLBoardCellDisplayOptions *_displayOptions;
}

@property(retain, nonatomic) CBLBoardCellDisplayOptions *displayOptions; // @synthesize displayOptions=_displayOptions;
@property(retain, nonatomic) CBLBoardCellLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) CBLBoard *board; // @synthesize board=_board;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)placesIcon;
- (id)groupIcon;
- (id)secretIcon;
- (void)refreshBoard;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

