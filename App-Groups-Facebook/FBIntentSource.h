//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface FBIntentSource : NSObject
{
    union {
        struct CGRect rect;
        struct CGPoint point;
    } _location;
    unsigned int _type;
    UIView *_view;
}

+ (id)sourceForPoint:(struct CGPoint)arg1 inView:(id)arg2;
+ (id)sourceForRect:(struct CGRect)arg1 inView:(id)arg2;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (struct CGPoint)pointInView:(id)arg1;
- (struct CGRect)rectInView:(id)arg1;

@end

