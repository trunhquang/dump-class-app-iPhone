//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableAsList.h"

@class ComGoogleCommonCollectImmutableCollection, ComGoogleCommonCollectImmutableList;

@interface ComGoogleCommonCollectRegularImmutableAsList : ComGoogleCommonCollectImmutableAsList
{
    ComGoogleCommonCollectImmutableCollection *delegate_;
    ComGoogleCommonCollectImmutableList *delegateList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)getWithInt:(int)arg1;
- (int)copyIntoArrayWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (id)listIteratorWithInt:(int)arg1;
- (id)delegateList;
- (id)delegateCollection;
- (id)initWithComGoogleCommonCollectImmutableCollection:(id)arg1 withNSObjectArray:(id)arg2;
- (id)initWithComGoogleCommonCollectImmutableCollection:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;

@end

