//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTICommonSapiCallback <NSObject, JavaObject>
- (void)onErrorWithJBTError:(id <JBTError>)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id <JBTSpan>)arg2;
@end

