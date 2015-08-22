//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBServerTrace, NSDictionary, NSString;

@interface FBMobileTraceRemoteTokenPtr : NSObject
{
    NSString *_nodeID;
    NSString *_remoteNodeID;
    NSString *_nodeDescription;
    FBServerTrace *_trace;
    CDUnknownBlockType _timeBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType timeBlock; // @synthesize timeBlock=_timeBlock;
@property(readonly, nonatomic) FBServerTrace *trace; // @synthesize trace=_trace;
@property(readonly, copy, nonatomic) NSString *nodeDescription; // @synthesize nodeDescription=_nodeDescription;
@property(readonly, copy, nonatomic) NSString *remoteNodeID; // @synthesize remoteNodeID=_remoteNodeID;
@property(readonly, copy, nonatomic) NSString *nodeID; // @synthesize nodeID=_nodeID;
- (void).cxx_destruct;
- (id)debugInfo;
@property(readonly, copy, nonatomic) NSDictionary *remoteCallAnnotations;
@property(readonly, copy, nonatomic) NSString *remoteSampled;
@property(readonly, copy, nonatomic) NSString *remoteMetadata;
- (id)initWithNodeID:(id)arg1 remoteNodeID:(id)arg2 description:(id)arg3 trace:(id)arg4 timeBlock:(CDUnknownBlockType)arg5;

@end
