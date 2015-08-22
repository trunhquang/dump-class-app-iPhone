//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTIItemsItemImpl.h"

#import "JBTQuery.h"

@class ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SuggestionClick, JBTQuery_ReasonEnum, NSString;

@interface JBTISearchQueryImpl : JBTIItemsItemImpl <JBTQuery>
{
    NSString *text_;
    JBTQuery_ReasonEnum *reason_;
    NSString *snippet_;
    id <JBTId> id__;
    NSString *imageUrl_;
    ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SuggestionClick *suggestionClickMetrics_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_suggestionClickMetrics_;
+ (id)__annotations_imageUrl_;
+ (id)__annotations_snippet_;
+ (id)__annotations_getSuggestionClickMetrics;
+ (id)__annotations_getSnippet;
+ (id)__annotations_getImageUrl;
+ (id)__annotations_getIsComplete;
+ (void)initialize;
+ (BOOL)isQueryQualifiedStateUpdatedWithJBTQuery_ReasonEnum:(id)arg1 withJBTQuery_ReasonEnum:(id)arg2;
+ (BOOL)isQueryQualifiedWithJBTQuery_ReasonEnum:(id)arg1;
- (void)dealloc;
- (id)getSuggestionClickMetrics;
- (id)getSnippet;
- (id)getItemType;
- (id)getImageUrl;
- (id)getId;
- (id)getTextPart;
- (id)getReason;
- (BOOL)getIsComplete;
- (id)toBuilder;
- (id)initWithJBTISearchQueryImpl_Builder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

