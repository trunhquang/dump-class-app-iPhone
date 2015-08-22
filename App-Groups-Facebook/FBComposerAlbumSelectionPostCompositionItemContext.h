//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, UIColor;

@interface FBComposerAlbumSelectionPostCompositionItemContext : FBValueObject <NSCopying>
{
    NSString *_title;
    NSString *_subtitleToUseWhenThereIsNoContent;
    UIColor *_selectedGlyphColor;
    UIColor *_noContentGlyphColor;
}

@property(readonly, copy, nonatomic) UIColor *noContentGlyphColor; // @synthesize noContentGlyphColor=_noContentGlyphColor;
@property(readonly, copy, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property(readonly, copy, nonatomic) NSString *subtitleToUseWhenThereIsNoContent; // @synthesize subtitleToUseWhenThereIsNoContent=_subtitleToUseWhenThereIsNoContent;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitleToUseWhenThereIsNoContent:(id)arg2 selectedGlyphColor:(id)arg3 noContentGlyphColor:(id)arg4;

@end

