//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class IOSByteArray, NSString;

@interface JavaNetInetAddress : NSObject <JavaIoSerializable>
{
    IOSByteArray *ipaddress_;
    NSString *hostName_;
    int family_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)ipv4MappedToIPv4WithByteArray:(id)arg1;
+ (BOOL)isIPv4MappedAddressWithByteArray:(id)arg1;
+ (id)badAddressLengthWithByteArray:(id)arg1;
+ (id)getByAddressWithNSString:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3;
+ (id)getByAddressWithNSString:(id)arg1 withByteArray:(id)arg2;
+ (id)getByAddressWithByteArray:(id)arg1;
+ (id)getLoopbackAddress;
+ (id)loopbackAddresses;
+ (id)parseNumericAddressWithNSString:(id)arg1;
+ (BOOL)isNumericWithNSString:(id)arg1;
+ (id)getHostByAddrImplWithJavaNetInetAddress:(id)arg1;
+ (void)clearDnsCache;
+ (id)lookupHostByNameWithNSString:(id)arg1;
+ (id)getLocalHost;
+ (id)getByNameWithNSString:(id)arg1;
+ (id)parseNumericAddressNoThrowWithNSString:(id)arg1;
+ (id)disallowDeprecatedFormatsWithNSString:(id)arg1 withJavaNetInetAddress:(id)arg2;
+ (id)makeInetAddressWithByteArray:(id)arg1 withNSString:(id)arg2;
+ (id)getAllByNameImplWithNSString:(id)arg1;
+ (id)getAllByNameWithNSString:(id)arg1;
+ (id)bytesToInetAddressesWithByteArray2:(id)arg1 withNSString:(id)arg2;
- (void)dealloc;
- (int)getFamily;
- (id)readResolve;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (BOOL)isReachableWithJavaNetInetAddress:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3;
- (BOOL)isReachableWithJavaNetNetworkInterface:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (BOOL)isReachableWithInt:(int)arg1;
- (BOOL)isSiteLocalAddress;
- (BOOL)isMulticastAddress;
- (BOOL)isMCSiteLocal;
- (BOOL)isMCOrgLocal;
- (BOOL)isMCNodeLocal;
- (BOOL)isMCLinkLocal;
- (BOOL)isMCGlobal;
- (BOOL)isLoopbackAddress;
- (BOOL)isLinkLocalAddress;
- (BOOL)isAnyLocalAddress;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (id)getCanonicalHostName;
- (id)getHostName;
- (id)getHostAddress;
- (id)getAddress;
- (BOOL)isEqual:(id)arg1;
- (id)initWithInt:(int)arg1 withByteArray:(id)arg2 withNSString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

