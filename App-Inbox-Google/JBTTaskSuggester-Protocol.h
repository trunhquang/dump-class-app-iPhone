//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTLiveList.h"
#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTTaskSuggester <JBTLiveList, NSObject, JavaObject>
- (void)updateQueryWithNSString:(NSString *)arg1 withBoolean:(BOOL)arg2 withJBTTaskSuggestion:(id <JBTTaskSuggestion>)arg3 withJBTId:(id <JBTId>)arg4 withJBTSpan:(id <JBTSpan>)arg5;
@end

