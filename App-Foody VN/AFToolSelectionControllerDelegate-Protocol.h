//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFToolSelectionController, NSString, UIImage;

@protocol AFToolSelectionControllerDelegate <NSObject>

@optional
- (NSString *)toolSelectionController:(AFToolSelectionController *)arg1 titleForTool:(NSString *)arg2;
- (UIImage *)toolSelectionController:(AFToolSelectionController *)arg1 iconForTool:(NSString *)arg2;
@end

