//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTItem.h"
#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTSearchContact <JBTItem, NSObject, JavaObject>
- (NSString *)getContactUrl;
- (id <JavaUtilList>)getIntendedContactReferences;
- (id <JBTContact>)getContact;
@end

