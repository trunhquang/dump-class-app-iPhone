//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, PSPDFCache, PSPDFDocument, PSPDFRenderQueue;

@interface PSPDFCacheDocumentOperation : NSOperation
{
    PSPDFCache *_cache;
    PSPDFDocument *_document;
    PSPDFRenderQueue *_renderQueue;
    NSArray *_sizes;
    int _diskCacheStrategy;
    unsigned int _aroundPage;
    id <PSPDFRenderDelegate> _renderDelegate;
    CDUnknownBlockType _imageRenderingCompletionBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType imageRenderingCompletionBlock; // @synthesize imageRenderingCompletionBlock=_imageRenderingCompletionBlock;
@property(readonly, nonatomic) __weak id <PSPDFRenderDelegate> renderDelegate; // @synthesize renderDelegate=_renderDelegate;
@property(readonly, nonatomic) unsigned int aroundPage; // @synthesize aroundPage=_aroundPage;
@property(readonly, nonatomic) int diskCacheStrategy; // @synthesize diskCacheStrategy=_diskCacheStrategy;
@property(readonly, nonatomic) NSArray *sizes; // @synthesize sizes=_sizes;
@property(readonly, nonatomic) PSPDFRenderQueue *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(readonly, nonatomic) PSPDFDocument *document; // @synthesize document=_document;
@property(readonly, nonatomic) PSPDFCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)main;
- (id)initWithCache:(id)arg1 document:(id)arg2 renderQueue:(id)arg3 sizes:(id)arg4 diskCacheStrategy:(int)arg5 aroundPage:(unsigned int)arg6 renderDelegate:(id)arg7 completionBlock:(CDUnknownBlockType)arg8;

@end
