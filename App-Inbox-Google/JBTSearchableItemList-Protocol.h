//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTItemList.h"
#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTSearchableItemList <JBTItemList, NSObject, JavaObject>
- (void)updateQueryStringWithNSString:(NSString *)arg1 withJBTSpan:(id <JBTSpan>)arg2;
@end

