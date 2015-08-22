//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSSet, NSString;

@interface FBUpdateBlacklist : FBValueObject <NSCopying>
{
    NSString *_reasonDescription;
    NSSet *_buildNumbers;
}

@property(readonly, copy, nonatomic) NSSet *buildNumbers; // @synthesize buildNumbers=_buildNumbers;
@property(readonly, copy, nonatomic) NSString *reasonDescription; // @synthesize reasonDescription=_reasonDescription;
- (void).cxx_destruct;
- (id)initWithReasonDescription:(id)arg1 buildNumbers:(id)arg2;

@end
