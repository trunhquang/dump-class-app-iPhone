//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TProcessorFactory.h"

@class NSString;

@interface TSharedProcessorFactory : NSObject <TProcessorFactory>
{
    id <TProcessor> mSharedProcessor;
}

- (void).cxx_destruct;
- (id)processorForTransport:(id)arg1;
- (void)dealloc;
- (id)initWithSharedProcessor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

