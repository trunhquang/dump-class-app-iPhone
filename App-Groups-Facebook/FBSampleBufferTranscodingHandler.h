//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBTranscodingHandler.h"

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, NSObject<OS_dispatch_queue>, NSString;

@interface FBSampleBufferTranscodingHandler : NSObject <FBTranscodingHandler>
{
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerTrackOutput;
    struct opaqueCMSampleBuffer *_firstSampleBuffer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _done;
    id <FBTranscodingHandlerDelegate> _delegate;
    CDStruct_1b6d18a9 _presentationTime;
}

@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTime; // @synthesize presentationTime=_presentationTime;
@property(readonly, nonatomic) BOOL done; // @synthesize done=_done;
@property(nonatomic) __weak id <FBTranscodingHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startTranscodingWhenReady;
- (void)dealloc;
- (id)initWithAssetWriter:(id)arg1 writerInput:(id)arg2 assetReader:(id)arg3 readerTrackOutput:(id)arg4 firstSampleBuffer:(struct opaqueCMSampleBuffer *)arg5 queue:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

