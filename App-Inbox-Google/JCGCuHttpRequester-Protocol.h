//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JCGCuHttpRequest, JavaLangException;

@protocol JCGCuHttpRequester <NSObject, JavaObject>
- (void)callbackWithExceptionWithJCGCuCallback:(id <JCGCuCallback>)arg1 withJavaLangException:(JavaLangException *)arg2;
- (void)sendWithJCGCuHttpRequest:(JCGCuHttpRequest *)arg1 withJCGCuCallback:(id <JCGCuCallback>)arg2;
@end

