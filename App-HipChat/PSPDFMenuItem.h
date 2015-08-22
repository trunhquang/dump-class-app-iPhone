//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIMenuItem.h"

@class NSString, UIImage;

@interface PSPDFMenuItem : UIMenuItem
{
    BOOL _enabled;
    BOOL _shouldInvokeAutomatically;
    NSString *_identifier;
    UIImage *_ps_image;
    CDUnknownBlockType _actionBlock;
    SEL _customSelector;
}

+ (void)installMenuHandlerForObject:(id)arg1;
@property(nonatomic) SEL customSelector; // @synthesize customSelector=_customSelector;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIImage *ps_image; // @synthesize ps_image=_ps_image;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL shouldInvokeAutomatically; // @synthesize shouldInvokeAutomatically=_shouldInvokeAutomatically;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)performBlock;
- (id)description;
- (id)initWithTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3 identifier:(id)arg4 allowImageColors:(BOOL)arg5;
- (id)initWithTitle:(id)arg1 image:(id)arg2 block:(CDUnknownBlockType)arg3 identifier:(id)arg4;
- (id)initWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2 identifier:(id)arg3;
- (id)initWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;

@end

