//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMapSnapshotSpecifier.h"

@class FBUserSession, NSString, UIImage;

@interface FBPinMapSnapshotSpecifier : NSObject <FBMapSnapshotSpecifier>
{
    CDStruct_2c43369c _coordinate;
    float _zoomRadius;
    FBUserSession *_session;
    UIImage *_pinImage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pinImage;
- (unsigned int)decorator;
- (id)requestForSize:(struct CGSize)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 session:(id)arg2 zoomRadius:(double)arg3 pinImage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

