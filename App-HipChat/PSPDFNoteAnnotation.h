//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAnnotation.h"

@class NSString;

@interface PSPDFNoteAnnotation : PSPDFAnnotation
{
    NSString *_iconName;
}

+ (id)keysForValuesToObserveForUndo;
+ (id)propertyKeys;
+ (struct CGRect)fixedSizeBoundingBoxForBoundingBox:(struct CGRect)arg1;
+ (int)fixedSizeAlignment;
+ (struct CGSize)fixedSize;
+ (BOOL)isFixedSize;
+ (BOOL)isWriteable;
+ (id)supportedTypes;
- (void).cxx_destruct;
- (id)annotationIcon;
- (id)renderAnnnotationIcon;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (void)drawImageInContext:(struct CGContext *)arg1 boundingBox:(struct CGRect)arg2;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (id)description;
- (BOOL)isEqualToAnnotation:(id)arg1;
- (unsigned int)hash;
- (id)initWithContents:(id)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 inAnnotsArray:(struct CGPDFArray *)arg2 documentRef:(struct CGPDFDocument *)arg3;
- (id)init;
- (BOOL)isOverlay;
- (BOOL)isResizable;
- (BOOL)requriesPopupAnnotation;

@end

