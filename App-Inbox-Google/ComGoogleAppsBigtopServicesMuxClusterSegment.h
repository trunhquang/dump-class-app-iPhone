//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesClustersBigTopCluster_VisibilityEnum, NSString;

@interface ComGoogleAppsBigtopServicesMuxClusterSegment : NSObject
{
    NSString *labelId_;
    ComGoogleAppsBigtopServicesClustersBigTopCluster_VisibilityEnum *visibility_;
    float priority_;
    BOOL hasThrottleSettings_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (BOOL)hasThrottleSettingsWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
+ (float)getPriorityForClusterWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
+ (id)getLabelIdForClusterWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
+ (id)getVisibilityForClusterWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
+ (id)createClusterSegmentsWithJavaUtilMap:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)hasThrottleSettings;
- (float)getPriority;
- (id)getVisibility;
- (id)getLabelId;
- (id)initWithNSString:(id)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster_VisibilityEnum:(id)arg2 withFloat:(float)arg3 withBoolean:(BOOL)arg4;

@end

