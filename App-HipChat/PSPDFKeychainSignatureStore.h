//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFSignatureStore.h"

@class NSArray, NSString;

@interface PSPDFKeychainSignatureStore : NSObject <PSPDFSignatureStore>
{
    NSString *_storeName;
    NSArray *_signatures;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)removeSignature:(id)arg1;
- (void)addSignature:(id)arg1;
@property(copy, nonatomic) NSArray *signatures; // @synthesize signatures=_signatures;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithStoreName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

