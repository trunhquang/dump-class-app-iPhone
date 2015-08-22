//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSString, UIFont;

@interface FBLabelLayer : CALayer
{
    int _horizontalAlignment;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property(nonatomic) int horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
- (int)_lineBreakModeForTextTruncation:(unsigned int)arg1;
- (struct CGSize)sizeThatFitsWithConstraint:(struct CGSize)arg1;
- (struct CGSize)sizeConstrainedToWidth:(float)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) UIFont *font; // @dynamic font;
@property(retain, nonatomic) struct CGColor *foregroundColor; // @dynamic foregroundColor;
@property(nonatomic) unsigned int lineBreakMode; // @dynamic lineBreakMode;
@property(copy, nonatomic) NSString *string; // @dynamic string;
@property(nonatomic) unsigned int verticalAlignment; // @dynamic verticalAlignment;

@end

