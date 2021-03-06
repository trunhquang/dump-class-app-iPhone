//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBListViewScrollState : NSObject
{
    int _rowIndex;
    float _scrollOffsetInCell;
    unsigned int _scrollDirection;
    unsigned int _preferredScrollPosition;
    struct CGPoint _fixedEdgeOffset;
}

@property(readonly, nonatomic) struct CGPoint fixedEdgeOffset; // @synthesize fixedEdgeOffset=_fixedEdgeOffset;
@property(readonly, nonatomic) unsigned int preferredScrollPosition; // @synthesize preferredScrollPosition=_preferredScrollPosition;
@property(readonly, nonatomic) unsigned int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) float scrollOffsetInCell; // @synthesize scrollOffsetInCell=_scrollOffsetInCell;
@property(readonly, nonatomic) int rowIndex; // @synthesize rowIndex=_rowIndex;
- (id)description;
- (id)initWithRowIndex:(int)arg1 scrollOffsetInCell:(float)arg2 scrollDirection:(unsigned int)arg3 preferredScrollPosition:(unsigned int)arg4 fixedEdgeOffset:(struct CGPoint)arg5;

@end

