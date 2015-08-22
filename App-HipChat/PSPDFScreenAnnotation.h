//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFLinkAnnotation.h"

#import "PSPDFStreamProvider.h"

@class NSString, PSPDFDocumentProvider;

@interface PSPDFScreenAnnotation : PSPDFLinkAnnotation <PSPDFStreamProvider>
{
    NSString *_assetName;
    unsigned int _mediaScreenWindowType;
    NSString *_streamPath;
}

+ (id)propertyKeys;
+ (id)supportedTypes;
@property(copy, nonatomic) NSString *streamPath; // @synthesize streamPath=_streamPath;
@property(nonatomic) unsigned int mediaScreenWindowType; // @synthesize mediaScreenWindowType=_mediaScreenWindowType;
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
- (void).cxx_destruct;
- (id)fileURLWithError:(id *)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 inAnnotsArray:(struct CGPDFArray *)arg2 documentRef:(struct CGPDFDocument *)arg3 path:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak PSPDFDocumentProvider *documentProvider;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

