//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTISmartMailProtoBasedComponent.h"
#import "JBTVideo.h"

@class JBTCCachedValue, JCSVideo, NSString;

@interface JBTISmartMailVideoImpl : JBTISmartMailAbstractSmartMailComponent <JBTVideo, JBTISmartMailProtoBasedComponent>
{
    JBTCCachedValue *source_;
    JBTCCachedValue *thumbnailImageCachedValue_;
    JBTCCachedValue *videoGoToCachedValue_;
    JBTCCachedValue *summaryLayout_;
    JCSVideo *videoProto_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getUrl;
+ (id)__annotations_getThumbnail;
+ (id)__annotations_getSourceOrganization;
+ (id)__annotations_getStructuredLink;
+ (id)__annotations_initWithJCSVideo_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJavaUtilList_withJBTOrganization__params;
- (void)dealloc;
- (id)createSummaryLayout;
- (id)getUrl;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getThumbnail;
- (id)getSourceOrganization;
- (id)getDuration;
- (id)getSource;
- (id)getTitle;
- (id)getStructuredLink;
- (BOOL)usesLegacyTypedSmartmailProto;
- (id)getProto;
- (id)initWithJCSVideo:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJavaUtilList:(id)arg5 withJBTOrganization:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

