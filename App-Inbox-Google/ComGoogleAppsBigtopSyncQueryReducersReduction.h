//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleAppsBigtopSyncQueryReducersReduction : NSObject
{
    id <ComGoogleAppsBigtopSyncQueryNodesNode> replacement_;
    int firstIndexOffset_;
    int lastIndexOffset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_replacement_;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncQueryNodesNode_withInt_withInt__params;
+ (void)initialize;
- (void)dealloc;
- (int)getLastIndexOffset;
- (int)getFirstIndexOffset;
- (id)getReplacement;
- (BOOL)hasReplacement;
- (BOOL)isNoOp;
- (id)initWithComGoogleAppsBigtopSyncQueryNodesNode:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)init;

@end

