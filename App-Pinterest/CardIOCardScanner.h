//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CardIOReadCardInfo;

@interface CardIOCardScanner : NSObject
{
    BOOL _lastFrameWasUpsideDown;
    BOOL _cardInfoCacheDirty;
    BOOL _lastFrameWasUsable;
    BOOL _scanIsComplete;
    CardIOReadCardInfo *_cardInfoCache;
    CDStruct_fee740eb _scannerState;
}

@property BOOL scanIsComplete; // @synthesize scanIsComplete=_scanIsComplete;
@property BOOL lastFrameWasUsable; // @synthesize lastFrameWasUsable=_lastFrameWasUsable;
@property BOOL cardInfoCacheDirty; // @synthesize cardInfoCacheDirty=_cardInfoCacheDirty;
@property(retain) CardIOReadCardInfo *cardInfoCache; // @synthesize cardInfoCache=_cardInfoCache;
@property CDStruct_fee740eb scannerState; // @synthesize scannerState=_scannerState;
@property BOOL lastFrameWasUpsideDown; // @synthesize lastFrameWasUpsideDown=_lastFrameWasUpsideDown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) CDStruct_7cea6920 *scanSessionAnalytics;
@property(readonly) CardIOReadCardInfo *cardInfo;
- (BOOL)complete;
- (void)addFrame:(id)arg1 focusScore:(float)arg2 brightnessScore:(float)arg3 isoSpeed:(int)arg4 shutterSpeed:(float)arg5 torchIsOn:(BOOL)arg6 markFlipped:(BOOL)arg7 scanExpiry:(BOOL)arg8;
- (void)reset;
- (id)init;
- (void)markCachesDirty;

@end
