//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTypedNSArrayOfFBComposerPerson, NSArray;

@interface FBComposerTaggedUsersBundleBuilder : NSObject
{
    BOOL _hasTaggedUsers;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromWithWho;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromWithWhoAndPhotos;
    FBTypedNSArrayOfFBComposerPerson *_taggedAndMentionedUsers;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersFromPhotos;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsersWithoutAuthor;
    NSArray *_autoTaggedUsersFromPhotos;
}

+ (id)composerTaggedUsersBundleFromExistingComposerTaggedUsersBundle:(id)arg1;
+ (id)composerTaggedUsersBundle;
- (void).cxx_destruct;
- (id)withAutoTaggedUsersFromPhotos:(id)arg1;
- (id)withTaggedUsersWithoutAuthor:(id)arg1;
- (id)withTaggedUsersFromPhotos:(id)arg1;
- (id)withTaggedAndMentionedUsers:(id)arg1;
- (id)withTaggedUsersFromWithWhoAndPhotos:(id)arg1;
- (id)withTaggedUsersFromWithWho:(id)arg1;
- (id)withHasTaggedUsers:(BOOL)arg1;
- (id)build;

@end
