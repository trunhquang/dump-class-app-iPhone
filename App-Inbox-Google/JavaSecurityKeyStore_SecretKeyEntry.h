//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaSecurityKeyStore_Entry.h"

@class NSString;

@interface JavaSecurityKeyStore_SecretKeyEntry : NSObject <JavaSecurityKeyStore_Entry>
{
    id <JavaxCryptoSecretKey> secretKey_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getSecretKey;
- (id)initWithJavaxCryptoSecretKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

