//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFContainerAnnotationProvider.h"

@class NSInputStream, NSOutputStream, NSURL, PSPDFXFDFParser;

@interface PSPDFXFDFAnnotationProvider : PSPDFContainerAnnotationProvider
{
    NSURL *_fileURL;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    CDUnknownBlockType _createInputStreamBlock;
    CDUnknownBlockType _createOutputStreamBlock;
    PSPDFXFDFParser *_parser;
}

@property(retain, nonatomic) PSPDFXFDFParser *parser; // @synthesize parser=_parser;
@property(copy) CDUnknownBlockType createOutputStreamBlock; // @synthesize createOutputStreamBlock=_createOutputStreamBlock;
@property(copy) CDUnknownBlockType createInputStreamBlock; // @synthesize createInputStreamBlock=_createInputStreamBlock;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void).cxx_destruct;
- (BOOL)saveAnnotationsWithOptions:(id)arg1 error:(id *)arg2;
- (void)loadAnnotationCache;
- (id)annotationsForPage:(unsigned int)arg1;
- (BOOL)hasLoadedAnnotationsForPage:(unsigned int)arg1;
- (void)loadAllAnnotations;
- (void)createOutputStreamIfRequired;
- (void)createInputStreamIfRequired;
- (void)destroyOutputStream;
- (void)destroyInputStream;
- (void)destroyStreams;
- (void)setFileURL:(id)arg1;
- (id)description;
- (void)commonXFDFProviderInit;
- (id)initWithDocumentProvider:(id)arg1 fileURL:(id)arg2;
- (id)initWithDocumentProvider:(id)arg1;

@end

