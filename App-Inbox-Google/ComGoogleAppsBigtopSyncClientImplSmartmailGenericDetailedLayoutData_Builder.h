//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCommonBaseOptional;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailGenericDetailedLayoutData_Builder : NSObject
{
    id <JavaUtilList> title_;
    id <JavaUtilList> images_;
    id <JavaUtilList> details_;
    id <JBTGenericSmartMailDetailedLayoutSection> collapsedRow_;
    ComGoogleCommonBaseOptional *subtitle_;
    id <JBTSmartMailComponent> component_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)setSubtitleWithJBTGoTo:(id)arg1;
- (id)setSubtitleWithJavaUtilList:(id)arg1;
- (id)setSubtitleWithNSString:(id)arg1;
- (id)initWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 withJBTGenericSmartMailDetailedLayoutSection:(id)arg4 withJBTSmartMailComponent:(id)arg5;

@end

