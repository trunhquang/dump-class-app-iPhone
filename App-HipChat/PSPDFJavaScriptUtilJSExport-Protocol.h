//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class NSDate, NSNumber, NSString;

@protocol PSPDFJavaScriptUtilJSExport <JSExport>
+ (NSString *)printx:(NSString *)arg1 source:(NSString *)arg2;
+ (NSString *)printd:(NSString *)arg1 date:(NSDate *)arg2 useXFAPicture:(NSNumber *)arg3;
+ (NSString *)printf:(NSString *)arg1;

@optional
+ (NSString *)printx:(NSString *)arg1 source:(NSString *)arg2 __JS_EXPORT_AS__printx:(id)arg3;
+ (NSString *)printd:(NSString *)arg1 date:(NSDate *)arg2 useXFAPicture:(NSNumber *)arg3 __JS_EXPORT_AS__printd:(id)arg4;
@end
