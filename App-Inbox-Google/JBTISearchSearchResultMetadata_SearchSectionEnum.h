//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "NSCopying.h"

@class ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SectionEnum, JBTSection_TypeEnum;

@interface JBTISearchSearchResultMetadata_SearchSectionEnum : JavaLangEnum <NSCopying>
{
    JBTSection_TypeEnum *type_;
    ComGoogleAppsBigtopServicesSearchSearchMetricsProto_SectionEnum *metricsSection_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getMetricsSection;
- (id)getSectionType;
- (id)initWithJBTSection_TypeEnum:(id)arg1 withComGoogleAppsBigtopServicesSearchSearchMetricsProto_SectionEnum:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4;

@end

