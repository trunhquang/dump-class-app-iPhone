//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURL, NSURLConnection;

@interface MNAudioDownloader : NSObject
{
    NSURL *url;
    id <MNAudioDownloaderDelegate> delegate;
    NSURLConnection *connection;
    NSMutableData *audioData;
    id userInfo;
    BOOL lowPriority;
    double _requestBeginTime;
    double _responseEndTime;
}

+ (void)setMaxConcurrentDownloads:(unsigned int)arg1;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3 lowPriority:(BOOL)arg4;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2 userInfo:(id)arg3;
+ (id)downloaderWithURL:(id)arg1 delegate:(id)arg2;
@property(nonatomic) BOOL lowPriority; // @synthesize lowPriority;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
@property(retain, nonatomic) NSMutableData *audioData; // @synthesize audioData;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection;
@property(nonatomic) id <MNAudioDownloaderDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)cancel;
- (void)start;

@end
