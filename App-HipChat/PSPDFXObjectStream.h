//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSPDFTextParser;

@interface PSPDFXObjectStream : NSObject
{
    struct CGPDFStream *_stream;
    NSString *_name;
    PSPDFTextParser *_textParser;
}

@property(nonatomic) __weak PSPDFTextParser *textParser; // @synthesize textParser=_textParser;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGPDFStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (id)description;

@end
