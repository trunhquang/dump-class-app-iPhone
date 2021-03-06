//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface CBLConversationCellLayoutAttributes : NSObject
{
    float _cellWidth;
    float _cellHeight;
    float _cardBottomMargin;
    float _timeStampBottomPadding;
    float _unreadDotPadding;
    float _imagePadding;
    float _actorImageSize;
    float _objectImageSize;
    float _textTopPadding;
    float _textBottomPadding;
    float _textLeftPadding;
    float _textRightPadding;
    UIFont *_actorNameFont;
    UIColor *_actorNameTextColor;
    int _actorNameLinebreakMode;
    int _actorNameMaxLines;
    UIFont *_messageFont;
    UIColor *_messageColor;
    int _messageLinebreakMode;
    int _messageMaxLines;
    UIFont *_timestampFont;
    UIColor *_timestampTextColor;
    int _timestampLinebreakMode;
    int _timeStampMaxLines;
    UIColor *_selectedBackgroundColor;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) UIColor *selectedBackgroundColor; // @synthesize selectedBackgroundColor=_selectedBackgroundColor;
@property(readonly, nonatomic) int timeStampMaxLines; // @synthesize timeStampMaxLines=_timeStampMaxLines;
@property(readonly, nonatomic) int timestampLinebreakMode; // @synthesize timestampLinebreakMode=_timestampLinebreakMode;
@property(readonly, nonatomic) UIColor *timestampTextColor; // @synthesize timestampTextColor=_timestampTextColor;
@property(readonly, nonatomic) UIFont *timestampFont; // @synthesize timestampFont=_timestampFont;
@property(readonly, nonatomic) int messageMaxLines; // @synthesize messageMaxLines=_messageMaxLines;
@property(readonly, nonatomic) int messageLinebreakMode; // @synthesize messageLinebreakMode=_messageLinebreakMode;
@property(readonly, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(readonly, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(readonly, nonatomic) int actorNameMaxLines; // @synthesize actorNameMaxLines=_actorNameMaxLines;
@property(readonly, nonatomic) int actorNameLinebreakMode; // @synthesize actorNameLinebreakMode=_actorNameLinebreakMode;
@property(readonly, nonatomic) UIColor *actorNameTextColor; // @synthesize actorNameTextColor=_actorNameTextColor;
@property(readonly, nonatomic) UIFont *actorNameFont; // @synthesize actorNameFont=_actorNameFont;
@property(readonly, nonatomic) float textRightPadding; // @synthesize textRightPadding=_textRightPadding;
@property(readonly, nonatomic) float textLeftPadding; // @synthesize textLeftPadding=_textLeftPadding;
@property(readonly, nonatomic) float textBottomPadding; // @synthesize textBottomPadding=_textBottomPadding;
@property(readonly, nonatomic) float textTopPadding; // @synthesize textTopPadding=_textTopPadding;
@property(readonly, nonatomic) float objectImageSize; // @synthesize objectImageSize=_objectImageSize;
@property(readonly, nonatomic) float actorImageSize; // @synthesize actorImageSize=_actorImageSize;
@property(readonly, nonatomic) float imagePadding; // @synthesize imagePadding=_imagePadding;
@property(readonly, nonatomic) float unreadDotPadding; // @synthesize unreadDotPadding=_unreadDotPadding;
@property(readonly, nonatomic) float timeStampBottomPadding; // @synthesize timeStampBottomPadding=_timeStampBottomPadding;
@property(readonly, nonatomic) float cardBottomMargin; // @synthesize cardBottomMargin=_cardBottomMargin;
@property(readonly, nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, nonatomic) float cellWidth; // @synthesize cellWidth=_cellWidth;
- (void).cxx_destruct;
- (id)init;

@end

