//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

@class ChatMessagePartDrawingLocation, NSMutableSet;

@interface ChatMessageLayoutManager : NSLayoutManager
{
    NSMutableSet *_drawingLocations;
    ChatMessagePartDrawingLocation *_currentInteractingMentionDrawingLocation;
}

+ (void)initialize;
@property(retain, nonatomic) ChatMessagePartDrawingLocation *currentInteractingMentionDrawingLocation; // @synthesize currentInteractingMentionDrawingLocation=_currentInteractingMentionDrawingLocation;
@property(retain, nonatomic) NSMutableSet *drawingLocations; // @synthesize drawingLocations=_drawingLocations;
- (void).cxx_destruct;
- (id)locationForDrawnMentionStyle:(int)arg1 withFontSize:(float)arg2 inRange:(struct _NSRange)arg3;
- (id)drawingLocationForRange:(struct _NSRange)arg1;
- (id)drawingLocationAtPoint:(struct CGPoint)arg1;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (id)userJidStringAtTouchPoint:(struct CGPoint)arg1;
- (void)interactionEnded;
- (void)interactionBeganWithTextAtPoint:(struct CGPoint)arg1;
- (void)clearLayoutCaches;
- (id)init;

@end

