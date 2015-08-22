//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData;

@interface FBVideoPrefetchedData : NSObject <NSCoding, NSCopying>
{
    unsigned int _totalVideoLength;
    NSData *_data;
}

@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned int totalVideoLength; // @synthesize totalVideoLength=_totalVideoLength;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTotalVideoLength:(unsigned int)arg1 data:(id)arg2;

@end

