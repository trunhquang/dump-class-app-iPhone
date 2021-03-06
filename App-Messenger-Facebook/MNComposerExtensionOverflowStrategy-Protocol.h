//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNComposerOverflowExtension, NSArray;

@protocol MNComposerExtensionOverflowStrategy <NSObject>
@property(readonly, copy, nonatomic) NSArray *extensionsToDisplay;
@property(copy, nonatomic) NSArray *extensions;
@property(readonly, nonatomic) MNComposerOverflowExtension *overflowExtension;
- (void)setSelectedExtension:(id <MNComposerExtension>)arg1;
- (BOOL)extensionIsInOverflow:(id <MNComposerExtension>)arg1;
- (unsigned int)indexOfExtensionInExtensionsToDisplay:(id <MNComposerExtension>)arg1;
- (unsigned int)numberOfExtensionsNeedsDisplay;
- (void)setNumberOfExtensionsToDisplay:(int)arg1;
- (id)initWithOverflowExtension:(MNComposerOverflowExtension *)arg1;
@end

