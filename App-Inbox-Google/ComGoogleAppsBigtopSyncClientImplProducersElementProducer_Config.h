//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_QueryModeEnum, ComGoogleCumulusQueryQueryProto_Query_Predicate, JBTICommonQueryExtension, JBTPriorityEnum, JBTQuery_ReasonEnum, NSString;

@interface ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config : NSObject
{
    JBTICommonQueryExtension *queryExtension_;
    ComGoogleCumulusQueryQueryProto_Query_Predicate *predicate_;
    NSString *queryString_;
    id <JavaUtilList> objectIds_;
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config_QueryModeEnum *queryMode_;
    JBTQuery_ReasonEnum *queryReason_;
    JBTPriorityEnum *priority_;
    int version__;
    int maxElementsCount_;
    BOOL isForceCheck_;
    BOOL isForceUpdateQuerySpec_;
    BOOL useStartupResultCache_;
    BOOL produceStartupResultCache_;
    NSString *normalizedQueryString_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_normalizedQueryString_;
+ (id)__annotations_objectIds_;
+ (id)__annotations_queryString_;
+ (id)__annotations_predicate_;
+ (id)__annotations_queryExtension_;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_getObjectIds;
+ (id)__annotations_getPredicate;
+ (id)__annotations_getNormalizedQueryString;
+ (id)__annotations_getQueryString;
+ (id)__annotations_getQueryExtension;
+ (void)initialize;
+ (id)newBuilder;
+ (id)emptyQueryInstance;
+ (id)defaultInstance;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)produceStartupResultCache;
- (BOOL)useStartupResultCache;
- (BOOL)isForceUpdateQuerySpec;
- (BOOL)isForceCheck;
- (BOOL)hasMaxElementsCount;
- (int)getMaxElementsCount;
- (id)getQueryReason;
- (id)getQueryMode;
- (int)getVersion;
- (id)getPriority;
- (BOOL)hasObjectIds;
- (id)getObjectIds;
- (BOOL)hasPredicate;
- (id)getPredicate;
- (BOOL)hasQueryString;
- (id)getNormalizedQueryString;
- (id)getQueryString;
- (BOOL)hasQueryExtension;
- (id)getQueryExtension;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1;
- (id)toBuilder;
- (id)init;

@end

