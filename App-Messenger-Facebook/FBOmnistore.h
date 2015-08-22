//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBOmnistore : NSObject
{
    unique_ptr_9ccff1a2 _omnistore;
}

+ (void)_logOmnistoreAvailability:(BOOL)arg1;
+ (id)newDummyOmnistore;
+ (id)newOmnistoreWithFile:(id)arg1 mqttClientManager:(id)arg2 notificationCenter:(struct __CFNotificationCenter *)arg3;
+ (id)newOmnistoreWithFile:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isOmnistoreAvailable;
- (void)setCollectionIndexerFunction:(CDUnknownBlockType)arg1;
- (void)addDeltaReceivedCallback:(CDUnknownBlockType)arg1;
- (id)subscribeCollection:(id)arg1;
- (BOOL)remove;
- (void)start;
- (id)initWithOmnistore:(unique_ptr_9ccff1a2)arg1;

@end
