//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DataLoader.h"

@class NSString;

@interface UserPhotoGroupDataLoader : DataLoader
{
    NSString *_userId;
}

@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)loadNextPageListWithRequestCount:(unsigned int)arg1 error:(id *)arg2;
- (id)loadFirstPageListWithRequestCount:(unsigned int)arg1 error:(id *)arg2;

@end

