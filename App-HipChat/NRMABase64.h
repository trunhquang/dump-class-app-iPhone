//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NRMABase64 : NSObject
{
}

+ (const char *)base64LookupTable;
+ (unsigned int)generateindexForFourthBase64Char:(unsigned char)arg1;
+ (unsigned int)generateIndexForThirdBase64Char:(unsigned char)arg1 thirdByte:(unsigned char)arg2;
+ (unsigned int)generateIndexForSecondBase64Char:(unsigned char)arg1 secondByte:(unsigned char)arg2;
+ (unsigned int)generateIndexForFirstBase64Char:(unsigned char)arg1;
+ (id)encodeFromData:(id)arg1;

@end

