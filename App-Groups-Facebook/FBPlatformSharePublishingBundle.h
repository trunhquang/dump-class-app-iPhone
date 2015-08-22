//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface FBPlatformSharePublishingBundle : FBValueObject <NSCopying>
{
    NSString *_ref;
    NSString *_actionType;
    NSDictionary *_actionParameters;
    NSDictionary *_actionPropertyToCreatedObjectType;
    NSArray *_ogMediaAttachmentsForUpload;
    NSArray *_ogMediaAttachmentsForDisplay;
    NSArray *_imageAttachments;
}

@property(readonly, copy, nonatomic) NSArray *imageAttachments; // @synthesize imageAttachments=_imageAttachments;
@property(readonly, copy, nonatomic) NSArray *ogMediaAttachmentsForDisplay; // @synthesize ogMediaAttachmentsForDisplay=_ogMediaAttachmentsForDisplay;
@property(readonly, copy, nonatomic) NSArray *ogMediaAttachmentsForUpload; // @synthesize ogMediaAttachmentsForUpload=_ogMediaAttachmentsForUpload;
@property(readonly, copy, nonatomic) NSDictionary *actionPropertyToCreatedObjectType; // @synthesize actionPropertyToCreatedObjectType=_actionPropertyToCreatedObjectType;
@property(readonly, copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(readonly, copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(readonly, copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
- (void).cxx_destruct;
- (id)initWithRef:(id)arg1 actionType:(id)arg2 actionParameters:(id)arg3 actionPropertyToCreatedObjectType:(id)arg4 ogMediaAttachmentsForUpload:(id)arg5 ogMediaAttachmentsForDisplay:(id)arg6 imageAttachments:(id)arg7;

@end

