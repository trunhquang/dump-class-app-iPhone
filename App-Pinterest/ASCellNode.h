//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

@interface ASCellNode : ASDisplayNode
{
    int _selectionStyle;
}

@property(nonatomic) int selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setLayerBacked:(BOOL)arg1;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

