//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@protocol AFAlertView <NSObject>
@property(copy, nonatomic) CDUnknownBlockType alertDismissedBlock;
@property(copy, nonatomic) CDUnknownBlockType buttonClickedBlock;
@property(readonly, nonatomic) int cancelButtonIndex;
- (void)show;
- (id)initWithTitle:(NSString *)arg1 message:(NSString *)arg2 image:(UIImage *)arg3 cancelButtonTitle:(NSString *)arg4 otherButtonTitles:(NSArray *)arg5;
@end

