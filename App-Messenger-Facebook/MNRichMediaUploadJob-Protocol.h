//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol MNRichMediaUploadJob
@property(retain, nonatomic) id <MNRichMediaUploadListener> listener;
@property(readonly, nonatomic) struct MNRichMediaUploadJobMetadata uploadMetadata;
@property(readonly, copy, nonatomic) NSString *token;
- (void)cancel;
- (void)upload;
@end
