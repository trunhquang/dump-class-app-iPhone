//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentModel;

@interface IGFeedItemRowItem : NSObject
{
    int _type;
    IGCommentModel *_comment;
}

+ (id)rowItemOfType:(int)arg1 withComment:(id)arg2;
@property(retain, nonatomic) IGCommentModel *comment; // @synthesize comment=_comment;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

