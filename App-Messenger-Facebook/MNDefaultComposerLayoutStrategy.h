//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNComposerLayoutStrategy.h"

@class NSString;

@interface MNDefaultComposerLayoutStrategy : NSObject <MNComposerLayoutStrategy>
{
    float _minComposeViewWidth;
    float _maxTabWidth;
}

- (id)_layoutConfigurationForOneLineWithWidth:(float)arg1 totalNumberOfTabs:(unsigned int)arg2;
- (id)_layoutConfigurationForTwoLineWithWidth:(float)arg1 totalNumberOfTabs:(unsigned int)arg2;
- (BOOL)_heightCanFitTwoLineComposer:(float)arg1;
- (BOOL)_widthCanFitOneLineComposer:(float)arg1;
- (id)layoutConfigurationForContext:(id)arg1 totalNumberOfTabs:(unsigned int)arg2 actionViewLocation:(int)arg3 actionViewWidth:(float)arg4;
- (id)initWithMinComposeViewWidth:(float)arg1 maxTabWidth:(float)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
