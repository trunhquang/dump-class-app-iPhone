//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTLiveList_Change_TypeEnum, NSString;

@protocol JBTLiveList_Change <NSObject, JavaObject>
- (int)getIndexAfterChange;
- (int)getIndexBeforeChange;
- (NSString *)getRank;
- (id)getElement;
- (id <JBTId>)getElementId;
- (JBTLiveList_Change_TypeEnum *)getType;
@end

