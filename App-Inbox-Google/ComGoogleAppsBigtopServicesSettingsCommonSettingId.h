//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCommonBaseOptional;

@interface ComGoogleAppsBigtopServicesSettingsCommonSettingId : NSObject
{
    ComGoogleCommonBaseOptional *serverDefinedSettingId_;
    ComGoogleCommonBaseOptional *clientDefinedSettingId_;
    ComGoogleCommonBaseOptional *experimentSettingId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_parseAsClientExperimentWithJavaUtilList_;
+ (id)__annotations_parseAsClientDefinedSettingWithJavaUtilList_;
+ (id)__annotations_parseAsServerDefinedSettingIdWithNSString_;
+ (id)__annotations_parseFromPermanentIdOrNullWithNSString_;
+ (void)initialize;
+ (id)parseAsClientExperimentWithJavaUtilList:(id)arg1;
+ (id)parseAsClientDefinedSettingWithJavaUtilList:(id)arg1;
+ (id)parseAsServerDefinedSettingIdWithNSString:(id)arg1;
+ (id)parseFromPermanentIdOrNullWithNSString:(id)arg1;
+ (id)parseFromPermanentIdWithNSString:(id)arg1;
+ (id)fromExperimentSettingIdWithComGoogleAppsBigtopServicesSettingsCommonExperimentSettingId:(id)arg1;
+ (id)fromClientDefinedSettingIdWithComGoogleAppsBigtopServicesSettingsCommonClientDefinedSettingId:(id)arg1;
+ (id)fromServerDefinedSettingIdWithComGoogleAppsBigtopServicesSettingsServerDefinedSettingIdEnum:(id)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)getPermanentId;
- (id)getExperimentSettingId;
- (id)getClientDefinedSettingId;
- (id)getServerDefinedSettingId;
- (id)initWithComGoogleCommonBaseOptional:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2 withComGoogleCommonBaseOptional:(id)arg3;

@end

