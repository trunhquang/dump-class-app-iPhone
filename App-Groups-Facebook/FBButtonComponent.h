//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponent.h"

@class FBButtonConfig;

@interface FBButtonComponent : CKComponent
{
    FBButtonConfig *_config;
}

+ (id)newWithConfig:(id)arg1 size:(const struct CKComponentSize *)arg2 attributes:(const unordered_map_f50c1a1f *)arg3 action:(SEL)arg4;
- (void).cxx_destruct;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;

@end

