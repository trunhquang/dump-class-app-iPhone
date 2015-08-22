//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, PSPDFUndoAction;

@protocol PSPDFUndoProtocol <NSObject>
+ (NSSet *)keysForValuesToObserveForUndo;

@optional
+ (unsigned int)undoCoalescingForKey:(NSString *)arg1;
+ (NSString *)localizedUndoActionNameForKey:(NSString *)arg1;
- (void)performUndoAction:(PSPDFUndoAction *)arg1;
- (void)didUndoOrRedoChange:(NSString *)arg1;
- (void)removeUndoObjects:(NSSet *)arg1 forKey:(NSString *)arg2;
- (void)insertUndoObjects:(NSSet *)arg1 forKey:(NSString *)arg2;
@end

