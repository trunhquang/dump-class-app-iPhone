//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTClientProvidedMedia.h"

@class JBTMedia_MediaTypeEnum, NSString;

@interface ComGoogleAppsBigtopSyncClientImplMediasClientProvidedMediaImpl : NSObject <JBTClientProvidedMedia>
{
    NSString *mediaId_;
    JBTMedia_MediaTypeEnum *mediaType_;
    NSString *fileName_;
    NSString *downloadUrl_;
    NSString *thumbnailUrl_;
    NSString *mimeType_;
    NSString *rank_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getMimeType;
- (BOOL)hasMimeType;
- (id)getThumbnailUrl;
- (BOOL)hasThumbnailUrl;
- (id)getDownloadUrl;
- (BOOL)hasDownloadUrl;
- (id)getFileName;
- (BOOL)hasFilename;
- (void)setRankWithNSString:(id)arg1;
- (id)getRank;
- (id)getId;
- (id)getMediaType;
- (id)initWithNSString:(id)arg1 withJBTMedia_MediaTypeEnum:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

