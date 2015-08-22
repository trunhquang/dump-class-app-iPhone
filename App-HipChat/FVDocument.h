//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FVHTTPClient, FVMIMEHelper, NSData, NSString, NSURL;

@interface FVDocument : NSObject
{
    BOOL _downloadCancelled;
    NSString *_filename;
    NSString *_mimeType;
    NSURL *_remoteURL;
    int _convertableType;
    CDUnknownBlockType _downloadCompletion;
    CDUnknownBlockType _downloadProgress;
    FVMIMEHelper *_mimeHelper;
    FVHTTPClient *_httpClient;
    NSData *_data;
}

@property(nonatomic) BOOL downloadCancelled; // @synthesize downloadCancelled=_downloadCancelled;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) FVHTTPClient *httpClient; // @synthesize httpClient=_httpClient;
@property(retain, nonatomic) FVMIMEHelper *mimeHelper; // @synthesize mimeHelper=_mimeHelper;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) CDUnknownBlockType downloadCompletion; // @synthesize downloadCompletion=_downloadCompletion;
@property(nonatomic) int convertableType; // @synthesize convertableType=_convertableType;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (void)cancelDownload;
- (void)downloadData;
- (BOOL)hasRemoteURL;
- (BOOL)isNativelyViewableIworkOrHtmlWithRemoteURL;
- (BOOL)isNativelyViewableImageWithData;
- (BOOL)isNativelyViewableImageWithRemoteURL;
- (BOOL)viewableWithoutConversion;
- (BOOL)viewableAfterConversion;
- (BOOL)needsConversion:(int *)arg1 mediaType:(int *)arg2;
- (id)cachedData;
- (id)convertedFileExtension;
- (BOOL)canConvertFileReturningMimeType:(id *)arg1 andConvertableType:(int *)arg2;
- (void)computeMimeAndConvertableType;
- (id)initWithRemoteURL:(id)arg1;
- (id)initWithData:(id)arg1 filename:(id)arg2;
- (id)initWithFile:(id)arg1;
- (id)init;

@end

