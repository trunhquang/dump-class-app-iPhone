//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangComparable.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTContactReference_KindEnum, JBTContactReference_TypeEnum, NSString;

@protocol JBTContactReference <JavaLangComparable, NSObject, JavaObject>
- (id <JBTContact>)getContact;
- (NSString *)getPhotoUrlWithJBTImageUrlSettings:(id <JBTImageUrlSettings>)arg1;
- (BOOL)hasPhotoUrl;
- (NSString *)getRank;
- (NSString *)getLabel;
- (BOOL)hasLabel;
- (id <JBTId>)getId;
- (NSString *)getName;
- (NSString *)getRef;
- (JBTContactReference_KindEnum *)getKind;
- (JBTContactReference_KindEnum *)getInfoKind;
- (JBTContactReference_TypeEnum *)getType;
@end

