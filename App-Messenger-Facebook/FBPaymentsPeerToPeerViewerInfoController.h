//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPaymentsPeerToPeerFetchControllerListener.h"

@class NSString;

@interface FBPaymentsPeerToPeerViewerInfoController : NSObject <FBPaymentsPeerToPeerFetchControllerListener>
{
    NSString *_primaryEmail;
}

@property(readonly, copy, nonatomic) NSString *primaryEmail; // @synthesize primaryEmail=_primaryEmail;
- (void).cxx_destruct;
- (void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned int)arg4 error:(id)arg5;
- (void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned int)arg4 response:(id)arg5 date:(id)arg6;
- (id)initWithFetchController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

