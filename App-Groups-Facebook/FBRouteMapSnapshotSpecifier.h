//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMapSnapshotSpecifier.h"

@class FBUserSession, NSArray, NSString;

@interface FBRouteMapSnapshotSpecifier : NSObject <FBMapSnapshotSpecifier>
{
    NSArray *_routePoints;
    CDStruct_feeb6407 _region;
    FBUserSession *_session;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pinImage;
- (unsigned int)decorator;
- (id)requestForSize:(struct CGSize)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRoutePoints:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

