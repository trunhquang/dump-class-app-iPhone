//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaSqlWrapper.h"
#import "NSObject.h"

@class NSString;

@protocol JavaSqlParameterMetaData <JavaSqlWrapper, NSObject, JavaObject>
- (BOOL)isSignedWithInt:(int)arg1;
- (int)isNullableWithInt:(int)arg1;
- (int)getScaleWithInt:(int)arg1;
- (int)getPrecisionWithInt:(int)arg1;
- (NSString *)getParameterTypeNameWithInt:(int)arg1;
- (int)getParameterTypeWithInt:(int)arg1;
- (int)getParameterModeWithInt:(int)arg1;
- (int)getParameterCount;
- (NSString *)getParameterClassNameWithInt:(int)arg1;
@end

