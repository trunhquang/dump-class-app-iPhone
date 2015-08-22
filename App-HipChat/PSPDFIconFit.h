//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFModel.h"

@class NSArray;

@interface PSPDFIconFit : PSPDFModel
{
    BOOL _scaleButtonAppearanceWithoutConsideringBorder;
    unsigned int _scaleMode;
    unsigned int _scaleType;
    NSArray *_leftoverSpace;
}

+ (id)scaleTypeJSONTransformer;
+ (id)scaleModeJSONTransformer;
+ (id)propertyKeys;
+ (void)load;
+ (id)iconFitFromPDFDictionary:(struct CGPDFDictionary *)arg1;
@property(nonatomic) BOOL scaleButtonAppearanceWithoutConsideringBorder; // @synthesize scaleButtonAppearanceWithoutConsideringBorder=_scaleButtonAppearanceWithoutConsideringBorder;
@property(copy, nonatomic) NSArray *leftoverSpace; // @synthesize leftoverSpace=_leftoverSpace;
@property(nonatomic) unsigned int scaleType; // @synthesize scaleType=_scaleType;
@property(nonatomic) unsigned int scaleMode; // @synthesize scaleMode=_scaleMode;
- (void).cxx_destruct;
- (id)PDFString;

@end
