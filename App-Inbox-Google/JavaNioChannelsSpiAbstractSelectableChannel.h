//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsSelectableChannel.h"

@class JavaNioChannelsSpiSelectorProvider;

@interface JavaNioChannelsSpiAbstractSelectableChannel : JavaNioChannelsSelectableChannel
{
    BOOL isBlocking_;
    JavaNioChannelsSpiSelectorProvider *provider_;
    id <JavaUtilList> keyList_;
    id blockingLock_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)containsValidKeys;
- (void)deregisterWithJavaNioChannelsSelectionKey:(id)arg1;
- (void)implConfigureBlockingWithBoolean:(BOOL)arg1;
- (id)configureBlockingWithBoolean:(BOOL)arg1;
- (id)blockingLock;
- (BOOL)isBlocking;
- (void)implCloseSelectableChannel;
- (void)implCloseChannel;
- (id)register__WithJavaNioChannelsSelector:(id)arg1 withInt:(int)arg2 withId:(id)arg3;
- (id)keyForWithJavaNioChannelsSelector:(id)arg1;
- (BOOL)isRegistered;
- (id)provider;
- (id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

@end

