//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedItem, NSArray;

@interface IGFeedItemTimelineLayoutAttributes : NSObject
{
    BOOL _sponsoredContext;
    BOOL _showExploreContext;
    BOOL _showTimeStampOnFirstLayoutElement;
    IGFeedItem *_feedItem;
    NSArray *_rowItems;
}

@property(retain, nonatomic) NSArray *rowItems; // @synthesize rowItems=_rowItems;
@property(nonatomic) BOOL showTimeStampOnFirstLayoutElement; // @synthesize showTimeStampOnFirstLayoutElement=_showTimeStampOnFirstLayoutElement;
@property(nonatomic) BOOL showExploreContext; // @synthesize showExploreContext=_showExploreContext;
@property(nonatomic) BOOL sponsoredContext; // @synthesize sponsoredContext=_sponsoredContext;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)visibleCommentModelsInTimeline;
- (id)commentForTextTimelineRow:(int)arg1;
- (int)cellTypeForTextTimelineRow:(int)arg1;
- (int)numberOfTextRowsInTimeline;
- (id)initWithFeedItem:(id)arg1 sponsoredContext:(BOOL)arg2 showExploreContext:(BOOL)arg3 showTimeStampOnFirstLayoutElement:(BOOL)arg4;

@end

