//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFFormElement.h"

#import "PSPDFButtonFormElementJSExport.h"

@class NSArray, NSString;

@interface PSPDFButtonFormElement : PSPDFFormElement <PSPDFButtonFormElementJSExport>
{
    NSArray *_opt;
    NSString *_onState;
}

+ (id)propertyKeys;
@property(copy, nonatomic) NSString *onState; // @synthesize onState=_onState;
@property(copy, nonatomic) NSArray *opt; // @synthesize opt=_opt;
- (void).cxx_destruct;
- (void)appendFieldValuePDFData:(id)arg1;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (void)_deselect;
- (void)_select;
- (void)deselect;
- (void)select;
- (BOOL)radioButtonsInUnison;
- (BOOL)isSelected;
- (BOOL)isRadioButton;
- (BOOL)isCheckBox;
- (BOOL)isPushButton;
- (id)value;
- (void)updateButtonKidsSelectionStateWithValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (id)formTypeName;
- (id)state;
- (id)exportValue;
- (BOOL)toggleButtonSelectionStateAndSendNotification:(BOOL)arg1;
- (BOOL)isEqualToAnnotation:(id)arg1;
- (id)annotationIcon;
- (id)appearanceStreamWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;
- (void)drawBulletInContext:(struct CGContext *)arg1;
- (void)drawCheckMarkInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 documentRef:(struct CGPDFDocument *)arg2 parent:(id)arg3 fieldsAddressMap:(id)arg4 overrideDataSource:(id)arg5;
- (BOOL)isBoxChecked:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *js_exportValues;
@property(readonly, copy, nonatomic) NSString *js_type;
- (id)js_value;

@end
