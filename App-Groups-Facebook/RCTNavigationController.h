//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationBarDelegate.h"

@class NSString;

@interface RCTNavigationController : UINavigationController <UINavigationBarDelegate>
{
    CDUnknownBlockType _scrollCallback;
    unsigned int _navigationLock;
}

@property(nonatomic) unsigned int navigationLock; // @synthesize navigationLock=_navigationLock;
- (void).cxx_destruct;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)initWithScrollCallback:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

