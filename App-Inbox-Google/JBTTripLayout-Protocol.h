//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTGenericSmartMailLayout.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTTripLayout <JBTGenericSmartMailLayout, NSObject, JavaObject>
- (id <JBTImage>)getImage;
- (id <JavaUtilList>)getDetails;
- (id <JavaUtilList>)getTripDetails;
- (id <JBTGenericSmartMailBadge>)getStatusBadge;
- (BOOL)hasStatusBadge;
- (int)getUnseenCount;
- (id <JBTItemCount>)getApproximateUnseenCount;
- (BOOL)shouldShowUnseenCount;
- (id <JavaUtilList>)getDateDescription;
- (id <JavaUtilList>)getTripName;
@end

