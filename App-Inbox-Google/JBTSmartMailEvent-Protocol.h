//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTGenericEvent.h"
#import "JBTGenericSmartMail.h"
#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTSmartMailEvent <JBTGenericSmartMail, JBTGenericEvent, NSObject, JavaObject>
- (id <JBTImage>)getImage;
- (id <JBTOrganization>)getPublisher;
- (id <JavaUtilList>)getPerformerNames;
- (NSString *)getUrl;
- (id <JBTAddress>)getAddress;
- (id <JavaUtilList>)getAttendees;
@end

