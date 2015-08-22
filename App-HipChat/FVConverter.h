//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class FVDocument, FVTicketUploader, NSString;

@interface FVConverter : NSOperation
{
    BOOL _debugEnabled;
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _isCancelled;
    CDUnknownBlockType _conversionProgressBlock;
    CDUnknownBlockType _conversionCompletionBlock;
    CDUnknownBlockType _uploadCompletion;
    FVDocument *_document;
    FVTicketUploader *_ticketUploader;
    int _convertableType;
    NSString *_mimeType;
}

@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property int convertableType; // @synthesize convertableType=_convertableType;
@property(retain) FVTicketUploader *ticketUploader; // @synthesize ticketUploader=_ticketUploader;
@property(retain) FVDocument *document; // @synthesize document=_document;
@property(copy) CDUnknownBlockType uploadCompletion; // @synthesize uploadCompletion=_uploadCompletion;
@property(nonatomic) BOOL debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(copy) CDUnknownBlockType conversionCompletionBlock; // @synthesize conversionCompletionBlock=_conversionCompletionBlock;
@property(copy) CDUnknownBlockType conversionProgressBlock; // @synthesize conversionProgressBlock=_conversionProgressBlock;
- (void).cxx_destruct;
- (void)completeOperation;
- (void)cancel;
- (void)main;
- (id)endpointAddress;
- (void)start;
- (void)setupWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)init;

@end
