//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSOperationQueue, NSString, PSPDFFileCache, PSPDFOperationStack;

@interface PSPDFImageProcessor : NSObject
{
    PSPDFOperationStack *_tilingQueue;
    NSOperationQueue *_resizingQueue;
    NSOperationQueue *_persistSourceImageQueue;
    NSCache *_tileCache;
    NSCache *_tileSourceCache;
    PSPDFFileCache *_fileCache;
}

+ (id)defaultProcessor;
+ (void)initialize;
@property(retain, nonatomic) PSPDFFileCache *fileCache; // @synthesize fileCache=_fileCache;
@property(retain, nonatomic) NSCache *tileSourceCache; // @synthesize tileSourceCache=_tileSourceCache;
@property(retain, nonatomic) NSCache *tileCache; // @synthesize tileCache=_tileCache;
@property(retain, nonatomic) NSOperationQueue *persistSourceImageQueue; // @synthesize persistSourceImageQueue=_persistSourceImageQueue;
@property(retain, nonatomic) NSOperationQueue *resizingQueue; // @synthesize resizingQueue=_resizingQueue;
@property(retain, nonatomic) PSPDFOperationStack *tilingQueue; // @synthesize tilingQueue=_tilingQueue;
- (void).cxx_destruct;
- (BOOL)cacheImageOnDisk:(id)arg1 identifier:(id)arg2 error:(id *)arg3;
- (id)cachedImageForIdentifier:(id)arg1;
- (void)clearDiskCache;
- (void)cancel;
- (struct CGAffineTransform)transformForResizingWithImageSize:(struct CGSize)arg1 maximumSize:(float)arg2;
- (id)resizingOperationForImage:(id)arg1 size:(float)arg2 resizeIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)resizeIdentifierFromIdentifier:(id)arg1 size:(float)arg2;
- (void)resizeImage:(id)arg1 identifier:(id)arg2 maximumSize:(float)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)enqueueTilingOperations:(id)arg1 tiles:(id)arg2 errors:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)tilingOperationForTileIdentifier:(id)arg1 tileRect:(struct CGRect)arg2 images:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)cachedTileForTileIdentifier:(id)arg1 tileRect:(struct CGRect)arg2;
- (BOOL)hasPendingTilingOperationForTileIdentifier:(id)arg1;
- (id)tileSourcePathFromIdentifier:(id)arg1;
- (id)tileIdentifierFromIdentifier:(id)arg1 tileSize:(struct CGSize)arg2 column:(unsigned int)arg3 row:(unsigned int)arg4;
- (id)sourceIdentifierFromIdentifier:(id)arg1;
- (void)prepareForTileSourceImagePoolWithImageData:(id)arg1 identifier:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)tileSourceImagePoolForIdentifier:(id)arg1;
- (void)tileImage:(id)arg1 identifier:(id)arg2 tileSize:(struct CGSize)arg3 inRect:(struct CGRect)arg4 tileBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)setUpPersistSourceImageQueue;
- (void)setUpResizingQueue;
- (void)setUpTileSourceCache;
- (void)setUpTileCache;
- (void)setUpTilingQueue;
@property(readonly, copy, nonatomic) NSString *diskCachePath;
- (id)init;
- (id)initWithFileCache:(id)arg1;
- (id)initWithDiskCachePath:(id)arg1;

@end
