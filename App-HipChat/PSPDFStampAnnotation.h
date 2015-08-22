//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAnnotation.h"

@class NSString, UIImage;

@interface PSPDFStampAnnotation : PSPDFAnnotation
{
    NSString *_subtext;
    NSString *_localizedSubject;
    UIImage *_image;
    struct CGAffineTransform _imageTransform;
}

+ (id)keysForValuesToObserveForUndo;
+ (id)imageTransformJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)propertyKeys;
+ (BOOL)isSignatureSubject:(id)arg1;
+ (id)PDFNamePrefixForSubject:(id)arg1;
+ (id)prefixDictionary;
+ (id)stampColorForSubject:(id)arg1;
+ (BOOL)isWriteable;
+ (id)supportedTypes;
@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *localizedSubject; // @synthesize localizedSubject=_localizedSubject;
@property(copy, nonatomic) NSString *subtext; // @synthesize subtext=_subtext;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didUnarchiveFromClipboard;
- (id)copyForClipboard;
- (id)localizedDescription;
- (id)PDFDataRepresentationsWithOptions:(id)arg1;
- (void)drawBox:(struct CGRect)arg1 withColor:(id)arg2 inContext:(struct CGContext *)arg3;
- (void)drawStampText:(id)arg1 rect:(struct CGRect)arg2 font:(struct __CTFont *)arg3 color:(id)arg4 context:(struct CGContext *)arg5 onlyEstimateSize:(struct CGSize *)arg6;
- (struct __CTFont *)createFontForGenericStamp;
- (void)drawGenericStampAtRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 onlyEstimateSize:(struct CGSize *)arg3;
- (void)drawRejectedStampAtRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawAcceptedStampAtRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawInContext:(struct CGContext *)arg1 options:(id)arg2 onlyEstimateSize:(struct CGSize *)arg3;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
- (struct CGRect)inscribedRectInOuterRect:(struct CGRect)arg1 rotated:(float)arg2;
- (id)localizedSubjectIfAvailable;
- (BOOL)loadAndSetImageWithError:(id *)arg1;
- (id)loadImageWithTransform:(out struct CGAffineTransform *)arg1 error:(id *)arg2;
- (id)description;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 inAnnotsArray:(struct CGPDFArray *)arg2 documentRef:(struct CGPDFDocument *)arg3;
- (id)initWithImage:(id)arg1;
- (id)initWithSubject:(id)arg1;
- (id)init;
- (BOOL)shouldMaintainAspectRatio;

@end

