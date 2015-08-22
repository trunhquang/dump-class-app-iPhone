//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTISmartMailProtoBasedComponent.h"
#import "JBTSmartMailEvent.h"

@class JBTCCachedValue, JBTISmartMailGenericSmartMailHelper, JCSEvent, NSString;

@interface JBTISmartMailSmartMailEventImpl : JBTISmartMailAbstractSmartMailComponent <JBTSmartMailEvent, JBTISmartMailProtoBasedComponent>
{
    JCSEvent *eventProto_;
    JBTCCachedValue *address_;
    JBTCCachedValue *performerNames_;
    JBTCCachedValue *startTime_;
    JBTCCachedValue *endTime_;
    JBTCCachedValue *attendees_;
    JBTCCachedValue *image_;
    JBTISmartMailGenericSmartMailHelper *genericSmartMailHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getImage;
+ (id)__annotations_getUrl;
+ (id)__annotations_getAddress;
+ (id)__annotations_getEndTime;
+ (id)__annotations_initWithJCSEvent_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJavaUtilList_withJBTOrganization__params;
- (void)dealloc;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (BOOL)usesLegacyTypedSmartmailProto;
- (id)getSortTime;
- (id)getProto;
- (id)getImage;
- (id)getAttendees;
- (id)getPerformerNames;
- (id)getUrl;
- (id)getAddress;
- (id)getEndTime;
- (id)getStartTime;
- (id)getName;
- (id)initWithJCSEvent:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJavaUtilList:(id)arg5 withJBTOrganization:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

