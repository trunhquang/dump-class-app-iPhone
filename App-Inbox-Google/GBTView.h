//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableSet;

@interface GBTView : UIView
{
    BOOL reentrant_;
    NSMutableSet *backViews_;
    NSMutableSet *frontViews_;
}

@property(nonatomic) BOOL reentrant; // @synthesize reentrant=reentrant_;
@property(retain, nonatomic) NSMutableSet *frontViews; // @synthesize frontViews=frontViews_;
@property(retain, nonatomic) NSMutableSet *backViews; // @synthesize backViews=backViews_;
- (void).cxx_destruct;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)addSubviewToFront:(id)arg1;
- (void)addSubviewToBack:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

