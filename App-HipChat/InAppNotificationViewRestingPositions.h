//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface InAppNotificationViewRestingPositions : NSObject
{
    float _width;
    float _notificationBarOffset;
    float _startingY;
    float _beginScale;
    float _endScale;
    float _collapseY;
    struct CGPoint _grabberCenterPoint;
    struct CGRect _originalNotificationFrame;
    struct CGRect _originalBarFrame;
    struct CGRect _originalPencilFrame;
    struct CGRect _originalCloseFrame;
    struct CGRect _originalTextViewFrame;
    struct CGRect _originalButtonOneFrame;
    struct CGRect _originalButtonTwoFrame;
    struct CGRect _originalButtonThreeFrame;
    struct CGRect _originalButtonFourFrame;
    struct CGRect _finalPencilFrame;
    struct CGRect _finalCloseFrame;
    struct CGRect _finalTextViewFrame;
    struct CGRect _minimalOpenNotificationFrame;
    struct CGRect _minimalOpenBarFrame;
    struct CGRect _fullOpenNotificationFrame;
    struct CGRect _fullOpenBarFrame;
    struct CGRect _titleFrame;
    struct CGRect _messageFrame;
    struct CGRect _originalSendButtonFrame;
    struct CGRect _finalSendButtonFrame;
}

@property(nonatomic) float collapseY; // @synthesize collapseY=_collapseY;
@property(nonatomic) float endScale; // @synthesize endScale=_endScale;
@property(nonatomic) float beginScale; // @synthesize beginScale=_beginScale;
@property(nonatomic) float startingY; // @synthesize startingY=_startingY;
@property(nonatomic) struct CGPoint grabberCenterPoint; // @synthesize grabberCenterPoint=_grabberCenterPoint;
@property(nonatomic) struct CGRect finalSendButtonFrame; // @synthesize finalSendButtonFrame=_finalSendButtonFrame;
@property(nonatomic) struct CGRect originalSendButtonFrame; // @synthesize originalSendButtonFrame=_originalSendButtonFrame;
@property(nonatomic) struct CGRect messageFrame; // @synthesize messageFrame=_messageFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) float notificationBarOffset; // @synthesize notificationBarOffset=_notificationBarOffset;
@property(nonatomic) struct CGRect fullOpenBarFrame; // @synthesize fullOpenBarFrame=_fullOpenBarFrame;
@property(nonatomic) struct CGRect fullOpenNotificationFrame; // @synthesize fullOpenNotificationFrame=_fullOpenNotificationFrame;
@property(nonatomic) struct CGRect minimalOpenBarFrame; // @synthesize minimalOpenBarFrame=_minimalOpenBarFrame;
@property(nonatomic) struct CGRect minimalOpenNotificationFrame; // @synthesize minimalOpenNotificationFrame=_minimalOpenNotificationFrame;
@property(nonatomic) struct CGRect finalTextViewFrame; // @synthesize finalTextViewFrame=_finalTextViewFrame;
@property(nonatomic) struct CGRect finalCloseFrame; // @synthesize finalCloseFrame=_finalCloseFrame;
@property(nonatomic) struct CGRect finalPencilFrame; // @synthesize finalPencilFrame=_finalPencilFrame;
@property(nonatomic) struct CGRect originalButtonFourFrame; // @synthesize originalButtonFourFrame=_originalButtonFourFrame;
@property(nonatomic) struct CGRect originalButtonThreeFrame; // @synthesize originalButtonThreeFrame=_originalButtonThreeFrame;
@property(nonatomic) struct CGRect originalButtonTwoFrame; // @synthesize originalButtonTwoFrame=_originalButtonTwoFrame;
@property(nonatomic) struct CGRect originalButtonOneFrame; // @synthesize originalButtonOneFrame=_originalButtonOneFrame;
@property(nonatomic) struct CGRect originalTextViewFrame; // @synthesize originalTextViewFrame=_originalTextViewFrame;
@property(nonatomic) struct CGRect originalCloseFrame; // @synthesize originalCloseFrame=_originalCloseFrame;
@property(nonatomic) struct CGRect originalPencilFrame; // @synthesize originalPencilFrame=_originalPencilFrame;
@property(nonatomic) struct CGRect originalBarFrame; // @synthesize originalBarFrame=_originalBarFrame;
@property(nonatomic) struct CGRect originalNotificationFrame; // @synthesize originalNotificationFrame=_originalNotificationFrame;
@property(nonatomic) float width; // @synthesize width=_width;

@end

