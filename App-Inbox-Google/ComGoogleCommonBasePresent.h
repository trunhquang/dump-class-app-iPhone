//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonBaseOptional.h"

@interface ComGoogleCommonBasePresent : ComGoogleCommonBaseOptional
{
    id reference_;
}

- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)transformWithComGoogleCommonBaseFunction:(id)arg1;
- (id)asSet;
- (id)orNull;
- (id)or__WithComGoogleCommonBaseSupplier:(id)arg1;
- (id)or__WithComGoogleCommonBaseOptional:(id)arg1;
- (id)or__WithId:(id)arg1;
- (id)get;
- (BOOL)isPresent;
- (id)initWithId:(id)arg1;

@end

