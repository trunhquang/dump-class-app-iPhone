//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAddressBookReader.h"

@class NSString;

@interface FBSystemAddressBookReader : NSObject <FBAddressBookReader>
{
    void *_addressBook;
    id <FBAddressBookReaderDelegate> _delegate;
    void *_addressbook;
}

@property(nonatomic) void *addressbook; // @synthesize addressbook=_addressbook;
@property(nonatomic) id <FBAddressBookReaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)readAddressBook;
- (void)updateAddressBook:(void *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

