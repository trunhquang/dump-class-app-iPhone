//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSPDFAlertController, UIAlertAction;

@interface PSPDFAlertAction : NSObject
{
    NSString *_title;
    int _style;
    PSPDFAlertController *_alertController;
    UIAlertAction *_alertAction;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)actionWithTitle:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak UIAlertAction *alertAction; // @synthesize alertAction=_alertAction;
@property(nonatomic) __weak PSPDFAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)performAction;
- (id)initWithTitle:(id)arg1 style:(int)arg2 handler:(CDUnknownBlockType)arg3;

@end

