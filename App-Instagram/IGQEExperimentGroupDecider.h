//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGQEExperimentGroupDecider : NSObject
{
}

+ (unsigned long long)segmentIDForClusterID:(unsigned long long)arg1 segmentsPerGroup:(unsigned long long)arg2 salt:(id)arg3;
+ (unsigned long long)saltWithSeed:(id)arg1 segmentsPerGroup:(unsigned long long)arg2;
+ (unsigned long long)clusterIDForUserID:(id)arg1;
+ (unsigned long long)userSegmentForUserID:(id)arg1 segmentsPerGroup:(unsigned long long)arg2 salt:(id)arg3;
+ (unsigned long long)userGroupForUserID:(id)arg1 segmentsPerGroup:(unsigned long long)arg2 salt:(id)arg3;
+ (unsigned long long)_hexdec:(id)arg1;
+ (unsigned long long)_hash:(id)arg1;
+ (id)md5hexDigestForString:(id)arg1;
+ (id)hexStringForData:(id)arg1;

@end
