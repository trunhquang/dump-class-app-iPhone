//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

@interface NSNumber (XMPP)
+ (unsigned long)extractUInt32FromData:(id)arg1 atOffset:(unsigned int)arg2 andConvertFromNetworkOrder:(BOOL)arg3;
+ (unsigned short)extractUInt16FromData:(id)arg1 atOffset:(unsigned int)arg2 andConvertFromNetworkOrder:(BOOL)arg3;
+ (unsigned char)extractUInt8FromData:(id)arg1 atOffset:(unsigned int)arg2;
+ (BOOL)parseString:(id)arg1 intoNSUInteger:(unsigned int *)arg2;
+ (BOOL)parseString:(id)arg1 intoNSInteger:(int *)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt64:(unsigned long long *)arg2;
+ (BOOL)parseString:(id)arg1 intoInt64:(long long *)arg2;
+ (BOOL)parseString:(id)arg1 intoUInt32:(unsigned int *)arg2;
+ (BOOL)parseString:(id)arg1 intoInt32:(int *)arg2;
+ (id)numberWithPtr:(const void *)arg1;
- (id)initWithPtr:(const void *)arg1;
@end

