//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMThread, FBMThreadDescriptor, MNMessagesLoadingConfiguration, MNModelRequestConfiguration, MNThreadViewModel, NSDictionary, NSError, NSSet;

@interface MNThreadViewModelLoaderRequest : NSObject
{
    FBMThreadDescriptor *_descriptor;
    MNModelRequestConfiguration *_fetchConfiguration;
    MNMessagesLoadingConfiguration *_messagesLoadingConfiguration;
    unsigned int _threadRequestState;
    FBMThread *_thread;
    NSError *_loadingError;
    unsigned int _userRequestState;
    NSDictionary *_usersByUserId;
    NSSet *_requestedUserIds;
    MNThreadViewModel *_threadViewModel;
    long long _requestId;
}

@property(retain, nonatomic) MNThreadViewModel *threadViewModel; // @synthesize threadViewModel=_threadViewModel;
@property(copy, nonatomic) NSSet *requestedUserIds; // @synthesize requestedUserIds=_requestedUserIds;
@property(copy, nonatomic) NSDictionary *usersByUserId; // @synthesize usersByUserId=_usersByUserId;
@property(nonatomic) unsigned int userRequestState; // @synthesize userRequestState=_userRequestState;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(retain, nonatomic) FBMThread *thread; // @synthesize thread=_thread;
@property(nonatomic) unsigned int threadRequestState; // @synthesize threadRequestState=_threadRequestState;
@property(readonly, copy, nonatomic) MNMessagesLoadingConfiguration *messagesLoadingConfiguration; // @synthesize messagesLoadingConfiguration=_messagesLoadingConfiguration;
@property(readonly, copy, nonatomic) MNModelRequestConfiguration *fetchConfiguration; // @synthesize fetchConfiguration=_fetchConfiguration;
@property(readonly, copy, nonatomic) FBMThreadDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)arg1 fetchConfiguration:(id)arg2 messagesLoadingConfiguration:(id)arg3;

@end

