//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CLSTracer : NSObject
{
    int _fileDescriptor;
    struct dispatch_queue_s *_queue;
    struct dispatch_source_s *_samplingTimer;
}

- (void)sample;
- (void)handleNotification:(id)arg1;
- (void)handleInitialNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

