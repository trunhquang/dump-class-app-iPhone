//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata.h"

@class ComGoogleCommonBaseOptional, NSString;

@interface JBTISearchSearchQueryMetadata : ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata
{
    NSString *queryString_;
    NSString *normalizedQueryString_;
    ComGoogleCommonBaseOptional *serializedEventId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)getSerializedEventId;
- (id)getNormalizedQueryString;
- (id)getQueryString;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonParsedQuery:(id)arg2 withJBTCMessageVisibilityHelper:(id)arg3 withNSString:(id)arg4 withComGoogleCommonBaseOptional:(id)arg5 withJBTId:(id)arg6;

@end

