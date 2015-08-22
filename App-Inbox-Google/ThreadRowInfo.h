//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView<ThreadNestedLayoutViewSubview>;

@interface ThreadRowInfo : NSObject
{
    BOOL _hasHeight;
    BOOL _rendered;
    NSArray *_scrollableAreaInfos;
    int _row;
    UIView<ThreadNestedLayoutViewSubview> *_view;
    struct CGPoint _scrollOffset;
    struct CGSize _scrollSize;
    struct CGRect _frame;
}

@property(nonatomic) __weak UIView<ThreadNestedLayoutViewSubview> *view; // @synthesize view=_view;
@property(nonatomic) struct CGSize scrollSize; // @synthesize scrollSize=_scrollSize;
@property(nonatomic) struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) int row; // @synthesize row=_row;
@property(nonatomic) BOOL rendered; // @synthesize rendered=_rendered;
@property(retain, nonatomic) NSArray *scrollableAreaInfos; // @synthesize scrollableAreaInfos=_scrollableAreaInfos;
@property(nonatomic) BOOL hasHeight; // @synthesize hasHeight=_hasHeight;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (id)init;

@end

