//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MNMessagesListDeltaUpdateBuilder : NSObject
{
    unsigned int _messagesComposingUpdate;
    unsigned int _threadContextUpdate;
    NSArray *_updateItems;
}

+ (id)messagesListDeltaUpdateFromExistingMessagesListDeltaUpdate:(id)arg1;
+ (id)messagesListDeltaUpdate;
- (void).cxx_destruct;
- (id)withUpdateItems:(id)arg1;
- (id)withThreadContextUpdate:(unsigned int)arg1;
- (id)withMessagesComposingUpdate:(unsigned int)arg1;
- (id)build;

@end

