//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNDiskPersistenceConfiguration : FBValueObject <NSCopying>
{
    unsigned int _persistenceMethod;
}

@property(readonly, nonatomic) unsigned int persistenceMethod; // @synthesize persistenceMethod=_persistenceMethod;
- (id)initWithPersistenceMethod:(unsigned int)arg1;

@end

