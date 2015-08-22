//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMIndexedMessageAppModelSet, FBMIndexedUserSet, FBMThread, FBMThreadContextViewModel, FBMThreadSummary, MNPageResponsivenessViewModel, MNThreadParticipantNameTitleInfo, NSDictionary, NSString;

@interface MNThreadViewModel : NSObject
{
    FBMThreadSummary *_summary;
    FBMIndexedMessageAppModelSet *_messages;
    FBMIndexedUserSet *_users;
    MNThreadParticipantNameTitleInfo *_participantNameTitleInfo;
    FBMThread *_legacyThread;
    NSString *_offlineThreadID;
    NSDictionary *_attributionSupplementaryInfo;
    FBMThreadContextViewModel *_threadContextViewModel;
    MNPageResponsivenessViewModel *_pageResponsivenessViewModel;
}

@property(readonly, copy, nonatomic) MNPageResponsivenessViewModel *pageResponsivenessViewModel; // @synthesize pageResponsivenessViewModel=_pageResponsivenessViewModel;
@property(readonly, copy, nonatomic) FBMThreadContextViewModel *threadContextViewModel; // @synthesize threadContextViewModel=_threadContextViewModel;
@property(readonly, copy, nonatomic) NSDictionary *attributionSupplementaryInfo; // @synthesize attributionSupplementaryInfo=_attributionSupplementaryInfo;
@property(readonly, copy, nonatomic) NSString *offlineThreadID; // @synthesize offlineThreadID=_offlineThreadID;
@property(readonly, retain, nonatomic) FBMThread *legacyThread; // @synthesize legacyThread=_legacyThread;
@property(readonly, copy, nonatomic) MNThreadParticipantNameTitleInfo *participantNameTitleInfo; // @synthesize participantNameTitleInfo=_participantNameTitleInfo;
@property(readonly, copy, nonatomic) FBMIndexedUserSet *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) FBMIndexedMessageAppModelSet *messages; // @synthesize messages=_messages;
@property(readonly, copy, nonatomic) FBMThreadSummary *summary; // @synthesize summary=_summary;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithSummary:(id)arg1 messages:(id)arg2 users:(id)arg3 legacyThread:(id)arg4 offlineThreadID:(id)arg5 participantTitleInfo:(id)arg6 attributionSupplementaryInfo:(id)arg7 threadContextViewModel:(id)arg8 pageResponsivenessViewModel:(id)arg9;
- (id)mn_conciseDescription;

@end
