//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, UIImage;

@interface GOOAction : NSObject <NSCopying>
{
    NSString *_title;
    int _style;
    UIImage *_iconImage;
    NSString *_automationIdentifier;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 iconImage:(id)arg2 style:(int)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *automationIdentifier; // @synthesize automationIdentifier=_automationIdentifier;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 iconImage:(id)arg2 style:(int)arg3 handler:(CDUnknownBlockType)arg4;

@end

