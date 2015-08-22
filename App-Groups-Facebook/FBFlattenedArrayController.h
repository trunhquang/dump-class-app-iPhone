//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FBFlattenedArrayController : NSObject
{
    NSMutableArray *_chunks;
}

- (void).cxx_destruct;
- (void)_enumerateChunkedSortedIndexPaths:(id)arg1 order:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (CDStruct_3e356df7)_locationForIndex:(unsigned int)arg1;
- (unsigned int)_countOfObjectsBeforeChunkAtIndex:(unsigned int)arg1;
- (vector_fd37e7c2)mergeChunkAtIndexWithPrecedingChunk:(unsigned int)arg1;
- (vector_fd37e7c2)removeChunksAtIndexes:(id)arg1;
- (vector_fd37e7c2)removeObjectsAtIndexPaths:(id)arg1;
- (vector_fd37e7c2)replaceObjectsAtIndexPaths:(id)arg1;
- (vector_fd37e7c2)insertObjectsAtIndexPaths:(id)arg1;
- (id)_processObjects:(id)arg1 withChunkMap:(const map_08af5835 *)arg2 chunkIndex:(unsigned int)arg3 countOfObjectsBeforeChunk:(unsigned int)arg4 changeType:(unsigned int)arg5 intoChangeList:(vector_fd37e7c2 *)arg6;
- (vector_fd37e7c2)insertChunkWithObjects:(id)arg1 atIndex:(unsigned int)arg2;
- (id)allObjects;
- (BOOL)hasChunkBoundaryAfterObjectAtIndex:(unsigned int)arg1;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)indexOfObject:(id)arg1;
- (id)underlyingIndexPathForIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)countForChunksInRange:(struct _NSRange)arg1;
- (unsigned int)chunkCount;
- (unsigned int)count;
- (id)init;

@end

