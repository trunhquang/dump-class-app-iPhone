//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIColor.h"

@interface UIColor (PSPDFFoundation)
+ (id)pspdf_colorWithCSSString:(id)arg1;
+ (id)pspdf_colorWithHexString:(id)arg1;
+ (id)pspdf_colorFromString:(id)arg1;
+ (id)pspdf_colorFromPropertyRepresentation:(id)arg1;
+ (id)pspdf_checkerColorWithSize:(float)arg1;
+ (id)pspdf_iOS7Blue;
+ (id)pspdf_guideColor;
+ (id)pspdf_innerSelectionColor;
+ (id)pspdf_selectionColor;
+ (float)pspdf_selectionAlpha;
+ (id)pspdf_closestAnnotationColorNameForColor:(id)arg1;
+ (id)pspdf_commonColorNames;
+ (id)pspdf_colorWithCGPDFArray:(struct CGPDFArray *)arg1 substituteTransparentForEmptyArray:(BOOL)arg2;
+ (id)pspdf_colorWithPDFDictionary:(struct CGPDFDictionary *)arg1 key:(const char *)arg2 substituteTransparentForEmptyArray:(BOOL)arg3;
- (id)pspdf_opaqueColor;
- (id)pspdf_colorInRGBColorSpace;
- (id)pspdf_darkenedColor;
- (id)pspdf_darkenedColorWithDelta:(float)arg1;
- (id)pspdf_lightenedColor;
- (id)pspdf_lightenedColorWithDelta:(float)arg1;
- (id)pspdf_RGString;
- (float)pspdf_brightness;
- (id)pspdf_hexString;
- (id)pspdf_colorString;
- (id)pspdf_webColorString;
- (id)pspdf_closestColorNameFromSelection:(id)arg1;
- (id)pspdf_closestAnnotationColorName;
- (id)pspdf_colorByMultiplyingByRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (BOOL)red:(float *)arg1 green:(float *)arg2 blue:(float *)arg3 alpha:(float *)arg4;
- (id)pspdf_colorByMultiplyingBy:(float)arg1;
- (float)pspdf_whiteComponent;
- (float)pspdf_alphaComponent;
- (float)pspdf_blueComponent;
- (float)pspdf_greenComponent;
- (float)pspdf_redComponent;
- (BOOL)pspdf_canProvideRGBColor;
- (int)pspdf_colorSpaceModel;
- (BOOL)pspdf_canProvideRGBComponents;
@end

