//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class FBUploadPartition, NSError;

@interface FBSegmentedUploadPartitionState : NSObject <NSCoding>
{
    FBUploadPartition *_partition;
    NSError *_segmentError;
    int _numUploadRequestsInFlight;
    struct _NSRange _nextChunkRangeInSegment;
}

+ (id)propertiesToSkipForCoding;
@property(nonatomic) int numUploadRequestsInFlight; // @synthesize numUploadRequestsInFlight=_numUploadRequestsInFlight;
@property(nonatomic) struct _NSRange nextChunkRangeInSegment; // @synthesize nextChunkRangeInSegment=_nextChunkRangeInSegment;
@property(retain, nonatomic) NSError *segmentError; // @synthesize segmentError=_segmentError;
@property(retain, nonatomic) FBUploadPartition *partition; // @synthesize partition=_partition;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isUploadCompleted;
- (id)initWithPartition:(id)arg1;

@end

