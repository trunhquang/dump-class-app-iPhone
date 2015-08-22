//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBDisplayableMedia.h"
#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedMediaFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"
#import "FBQueriedProfileFieldsProtocol.h"
#import "FBShareable.h"
#import "FBVideoProtocolHuman.h"

@class NSString;

@interface FBMemVideo : FBMemModelObject <FBShareable, FBVideoProtocolHuman, FBDisplayableMedia, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMediaFieldsProtocol, FBQueriedProfileFieldsProtocol>
{
}

- (id)fbid;
- (void)taggableSourceAvatarWithSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shareableImage;
- (id)shareableImageURL;
- (id)shareableDescription;
- (id)shareableSubtitle;
- (id)shareableTitle;
- (id)shareableType;
- (id)shareableText;
- (id)shareableURL;
- (id)shareableID;
- (id)entityURL;
- (id)mediaID;
- (float)aspectRatio;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
