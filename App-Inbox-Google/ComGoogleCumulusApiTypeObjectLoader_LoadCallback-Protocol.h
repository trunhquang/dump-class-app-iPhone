//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaLangException, NSString;

@protocol ComGoogleCumulusApiTypeObjectLoader_LoadCallback <NSObject, JavaObject>
- (void)onErrorWithJavaLangException:(JavaLangException *)arg1;
- (void)onSuccessWithNSString:(NSString *)arg1 withComGoogleCumulusApiTypeObjectReader:(id <ComGoogleCumulusApiTypeObjectReader>)arg2;
@end

