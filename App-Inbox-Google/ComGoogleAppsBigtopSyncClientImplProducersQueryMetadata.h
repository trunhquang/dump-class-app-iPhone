//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, JBTCMessageVisibilityHelper, JBTICommonParsedQuery;

@interface ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata : NSObject
{
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    JBTICommonParsedQuery *parsedQuery_;
    JBTCMessageVisibilityHelper *visibilityHelper_;
    id <JBTId> idOfCommandThatCausedUpdate_;
    BOOL spanCloseOnly_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (void)initialize;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpanCloseOnly;
- (id)getIdOfCommandThatCausedUpdate;
- (id)getVisibilityHelper;
- (id)getParsedQuery;
- (id)getConfig;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonParsedQuery:(id)arg2 withJBTCMessageVisibilityHelper:(id)arg3 withJBTId:(id)arg4 withBoolean:(BOOL)arg5;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTICommonParsedQuery:(id)arg2 withJBTCMessageVisibilityHelper:(id)arg3 withJBTId:(id)arg4;

@end

