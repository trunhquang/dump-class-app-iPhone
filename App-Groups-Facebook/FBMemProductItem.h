//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBFeedbackTargetProtocol.h"
#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"
#import "FBShareable.h"

@class NSString;

@interface FBMemProductItem : FBMemModelObject <FBShareable, FBFeedbackTargetProtocol, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol>
{
}

- (BOOL)isShareableURLOverwritten;
- (id)shareableImage;
- (id)shareableImageURL;
- (id)shareableDescription;
- (id)shareableSubtitle;
- (id)shareableTitle;
- (id)shareableType;
- (id)shareableText;
- (id)shareableURL;
- (id)shareableID;
- (void)taggableSourceAvatarWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

