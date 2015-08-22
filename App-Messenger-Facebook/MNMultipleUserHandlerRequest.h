//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNModelRequestConfiguration, NSSet;

@interface MNMultipleUserHandlerRequest : FBValueObject <NSCopying>
{
    BOOL _allowEmailUsers;
    NSSet *_requestedUserIds;
    MNModelRequestConfiguration *_configuration;
    long long _requestId;
}

@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) BOOL allowEmailUsers; // @synthesize allowEmailUsers=_allowEmailUsers;
@property(readonly, copy, nonatomic) NSSet *requestedUserIds; // @synthesize requestedUserIds=_requestedUserIds;
@property(readonly, nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)initWithRequestId:(long long)arg1 requestedUserIds:(id)arg2 allowEmailUsers:(BOOL)arg3 configuration:(id)arg4;

@end
