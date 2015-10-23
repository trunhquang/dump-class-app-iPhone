//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFont;

@interface AFTextToolFont : NSObject
{
    NSString *_displayName;
    NSString *_fontName;
    float _displayFontSize;
}

@property(nonatomic) float displayFontSize; // @synthesize displayFontSize=_displayFontSize;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fontWithSize:(float)arg1;
@property(readonly, nonatomic) UIFont *displayFont;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

