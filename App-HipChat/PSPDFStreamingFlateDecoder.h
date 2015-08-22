//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFStreamingDecoder.h"

@class NSData, NSString;

@interface PSPDFStreamingFlateDecoder : NSObject <PSPDFStreamingDecoder>
{
    struct z_stream_s _stream;
    char *_outputBuffer;
    NSData *_output;
}

- (void).cxx_destruct;
- (const char *)pushBytes:(const char *)arg1 length:(unsigned long)arg2 outputLength:(unsigned int *)arg3;
- (void)endParsing;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

