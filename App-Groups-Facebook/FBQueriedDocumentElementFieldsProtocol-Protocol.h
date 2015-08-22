//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemComposedBlockWithEntities, FBMemDocumentListElementToItemsConnection, FBMemDocumentLocation, FBMemDocumentSlideshowElementMediaConnection, FBMemDocumentTextAnnotation, FBMemFeedback, FBMemPhoto, FBMemVideo, NSArray, NSNumber, NSString;

@protocol FBQueriedDocumentElementFieldsProtocol <FBModelObjectProtocol>
- (NSString *)webviewPresentationStyle;
- (NSString *)videoLoopingStyle;
- (NSString *)videoControlStyle;
- (NSString *)videoAutoplayStyle;
- (FBMemDocumentTextAnnotation *)titleAnnotation;
- (FBMemDocumentTextAnnotation *)subtitleAnnotation;
- (FBMemDocumentSlideshowElementMediaConnection *)slideshowMedia;
- (FBMemPhoto *)posterImage;
- (FBMemPhoto *)photo;
- (NSString *)mediaPresentationStyle;
- (NSString *)marginStyle;
- (NSString *)mapStyle;
- (NSArray *)mapLocations;
- (FBMemDocumentLocation *)locationAnnotation;
- (NSString *)listStyle;
- (FBMemDocumentListElementToItemsConnection *)listElements;
- (NSString *)htmlSource;
- (NSString *)graphQLID;
- (NSString *)feedbackOptions;
- (FBMemFeedback *)feedback;
- (FBMemVideo *)elementVideo;
- (FBMemComposedBlockWithEntities *)elementText;
- (NSString *)documentElementType;
- (int)displayWidthValue;
- (NSNumber *)displayWidth;
- (int)displayHeightValue;
- (NSNumber *)displayHeight;
- (FBMemDocumentTextAnnotation *)copyrightAnnotation;
- (NSArray *)blocks;
- (NSString *)baseURLString;
- (NSString *)audioURLString;
- (FBMemDocumentTextAnnotation *)audioTitle;
- (NSString *)audioPlayMode;
- (FBMemDocumentTextAnnotation *)attributionAnnotation;
@end

