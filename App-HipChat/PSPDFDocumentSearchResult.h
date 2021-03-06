//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, PSPDFDocument, PSPDFSearchResult;

@interface PSPDFDocumentSearchResult : NSObject
{
    PSPDFDocument *_document;
    unsigned int _page;
    NSAttributedString *_previewString;
    PSPDFSearchResult *_previewTextResult;
}

@property(retain, nonatomic) PSPDFSearchResult *previewTextResult; // @synthesize previewTextResult=_previewTextResult;
@property(copy, nonatomic) NSAttributedString *previewString; // @synthesize previewString=_previewString;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
@property(retain, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDocument:(id)arg1 page:(unsigned int)arg2 previewString:(id)arg3;

@end

