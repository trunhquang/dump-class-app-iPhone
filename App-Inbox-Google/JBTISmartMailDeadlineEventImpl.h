//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTDeadlineEvent.h"

@class ComGooglePersonalizationAssistAnnotateApiDeadlineAssistance, JBTCCachedValue, NSString;

@interface JBTISmartMailDeadlineEventImpl : JBTISmartMailAbstractSmartMailComponent <JBTDeadlineEvent>
{
    ComGooglePersonalizationAssistAnnotateApiDeadlineAssistance *assistanceProto_;
    id <JBTTimeHelper> timeHelper_;
    JBTCCachedValue *cachedStartTime_;
    JBTCCachedValue *cachedEndTime_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getImage;
+ (id)__annotations_getPerformerNames;
+ (id)__annotations_getUrl;
+ (id)__annotations_getAddress;
+ (id)__annotations_getEndTime;
+ (id)__annotations_initWithComGooglePersonalizationAssistAnnotateApiDeadlineAssistance_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTTimeHelper_withJBTISmartMailSmartMailComponentContextImpl_withJBTOrganization__params;
+ (void)initialize;
- (void)dealloc;
- (long long)getStartOfDayTimeMsInUserTimeZoneWithJBTTime:(id)arg1 withLong:(long long)arg2;
- (id)createTimeWithComGooglePersonalizationAssistAnnotateApiTime:(id)arg1;
- (BOOL)shouldShow;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getImage;
- (id)getPerformerNames;
- (id)getUrl;
- (id)getAddress;
- (int)getDaysUntilDeadline;
- (id)getEndTime;
- (id)getAttendees;
- (id)getStartTime;
- (id)getName;
- (id)initWithComGooglePersonalizationAssistAnnotateApiDeadlineAssistance:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTTimeHelper:(id)arg4 withJBTISmartMailSmartMailComponentContextImpl:(id)arg5 withJBTOrganization:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

