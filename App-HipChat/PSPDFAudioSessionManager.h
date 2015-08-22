//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface PSPDFAudioSessionManager : NSObject
{
    NSHashTable *_recorders;
}

@property(readonly, nonatomic) NSHashTable *recorders; // @synthesize recorders=_recorders;
- (void).cxx_destruct;
- (BOOL)configureAudioSession:(id *)arg1;
- (void)configureAudioSessionAndLogError;
- (unsigned int)numActiveRecorders;
- (void)removeRecorder:(id)arg1;
- (void)addRecorder:(id)arg1;
- (id)init;

@end

