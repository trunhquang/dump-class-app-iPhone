//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"
#import "OrgW3cDomNode.h"

@class NSString;

@protocol OrgW3cDomAttr <OrgW3cDomNode, NSObject, JavaObject>
- (BOOL)isId;
- (id <OrgW3cDomTypeInfo>)getSchemaTypeInfo;
- (id <OrgW3cDomElement>)getOwnerElement;
- (void)setValueWithNSString:(NSString *)arg1;
- (NSString *)getValue;
- (BOOL)getSpecified;
- (NSString *)getName;
@end

