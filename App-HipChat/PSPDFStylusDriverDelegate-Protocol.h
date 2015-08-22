//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol PSPDFStylusDriverDelegate <NSObject>
- (void)connectionStatusChanged;

@optional
- (void)stylusSuggestsToEnableGestures;
- (void)stylusSuggestsToDisableGestures;
- (void)stylusTouchCancelled:(NSSet *)arg1;
- (void)stylusTouchEnded:(NSSet *)arg1;
- (void)stylusTouchMoved:(NSSet *)arg1;
- (void)stylusTouchBegan:(NSSet *)arg1;
- (void)classificationsDidChangeForTouches:(NSSet *)arg1;
- (void)buttonFired:(unsigned int)arg1;
@end

