//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

#import "CBLRemoteModelCollectionElement.h"

@class NSString, NSURL;

@interface CBLRemoteModelObject : CBLModelObject <CBLRemoteModelCollectionElement>
{
    BOOL _detailsLoaded;
    BOOL _remoteUpdatingDisabled;
    NSString *_identifier;
}

+ (void)modelObjectWithAlternateIdentifier:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
+ (id)modelObjectWithDictionary:(id)arg1;
+ (id)modelObjectWithIdentifier:(id)arg1;
+ (id)uniqueRequestId;
+ (id)additionalDetailFields;
+ (unsigned int)cacheCost;
+ (id)remoteEntityName;
+ (id)client;
+ (id)canonicalCachePropertyKey;
+ (id)namespacedIdentifierForIdentifier:(id)arg1;
+ (id)propertyAliases;
@property(nonatomic) BOOL remoteUpdatingDisabled; // @synthesize remoteUpdatingDisabled=_remoteUpdatingDisabled;
@property(nonatomic) BOOL detailsLoaded; // @synthesize detailsLoaded=_detailsLoaded;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)loadDetailsWithAdditionalFields:(id)arg1 fields:(id)arg2 withSuccess:(CDUnknownBlockType)arg3 andFailure:(CDUnknownBlockType)arg4;
- (void)loadDetailsWithSuccess:(CDUnknownBlockType)arg1 andFailure:(CDUnknownBlockType)arg2;
- (void)loadWithDictionary:(id)arg1;
- (void)updateRemoteParameters:(id)arg1 withAdditionalFields:(id)arg2 withSuccess:(CDUnknownBlockType)arg3 andFailure:(CDUnknownBlockType)arg4;
- (void)updateRemoteParameters:(id)arg1 withSuccess:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
- (void)updateRemoteValueWithName:(id)arg1 toBooleanState:(BOOL)arg2 withSuccess:(CDUnknownBlockType)arg3 andFailure:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSURL *resourceURL;
- (id)relativeRemotePath;
- (id)canonicalCacheKey;
@property(readonly, copy, nonatomic) NSString *namespacedIdentifier;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
