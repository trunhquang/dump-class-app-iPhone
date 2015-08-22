//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTError_CodeEnum, JBTError_TypeEnum, JavaLangThrowable, NSString;

@protocol JBTError <NSObject, JavaObject>
- (NSString *)description;
- (id <JBTSpan>)getSpan;
- (id)getInfo;
- (JavaLangThrowable *)getThrowable;
- (NSString *)getDescription;
- (JBTError_CodeEnum *)getCode;
- (JBTError_TypeEnum *)getType;
@end

