//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFAnnotationStyleManager.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface PSPDFDefaultAnnotationStyleManager : NSObject <PSPDFAnnotationStyleManager>
{
    BOOL _shouldUpdateDefaultsForAnnotationChanges;
    NSSet *_styleKeys;
    NSObject<OS_dispatch_queue> *_styleQueue;
    NSDictionary *_styles;
    NSObject<OS_dispatch_queue> *_presetQueue;
    NSDictionary *_presets;
}

+ (id)pluginInfo;
+ (id)drawingBlue;
+ (id)highlightYellow;
@property(copy) NSDictionary *presets; // @synthesize presets=_presets;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *presetQueue; // @synthesize presetQueue=_presetQueue;
@property(copy) NSDictionary *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *styleQueue; // @synthesize styleQueue=_styleQueue;
@property(copy) NSSet *styleKeys; // @synthesize styleKeys=_styleKeys;
@property(nonatomic) BOOL shouldUpdateDefaultsForAnnotationChanges; // @synthesize shouldUpdateDefaultsForAnnotationChanges=_shouldUpdateDefaultsForAnnotationChanges;
- (void).cxx_destruct;
- (void)annotationChanged:(id)arg1;
- (void)load:(id)arg1 forKey:(id)arg2 queue:(id)arg3;
- (void)loadPresets;
- (void)loadStyles;
- (void)save:(id)arg1 forKey:(id)arg2 queue:(id)arg3;
- (void)savePresets;
- (void)saveStyles;
- (id)defaultPresetsForKey:(id)arg1 type:(id)arg2;
- (void)scheduleSavePresets;
- (void)setPresets:(id)arg1 forKey:(id)arg2 type:(id)arg3;
- (id)presetsForKey:(id)arg1 type:(id)arg2;
- (void)setLastUsedValue:(id)arg1 forProperty:(id)arg2 forKey:(id)arg3;
- (id)lastUsedProperty:(id)arg1 forKey:(id)arg2;
- (id)lastUsedStyleForKey:(id)arg1;
- (void)scheduleSaveStyles;
- (void)removeStyle:(id)arg1 forKey:(id)arg2;
- (void)addStyle:(id)arg1 forKey:(id)arg2;
- (id)stylesForKey:(id)arg1;
- (void)setupDefaultStylesIfNeeded;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPluginRegistry:(id)arg1 options:(id)arg2;
- (id)init;
- (id)defaultBorderPresetsForKey:(id)arg1;
- (BOOL)shouldAddExtraColorPresets;
- (id)defaultTextMarkupColorPresets;
- (id)defaultFreehandHighlighterColors;
- (id)defaultTextHighlightColorPresets;
- (id)defaultDrawingColorPresets;
- (id)defaultTextColorPresets;
- (id)defaultColorPresetsForKey:(id)arg1;
- (void)setDefaultStyles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

