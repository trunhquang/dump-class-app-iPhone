//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTRsvpAction.h"

@class JBTCCachedValue, JBTISmartMailSmartMailComponentContextImpl, JCSAssignedId, JCSRsvpAction, NSString;

@interface JBTISmartMailRsvpActionImpl : NSObject <JBTRsvpAction>
{
    JCSAssignedId *assignedId_;
    id <JBTISmartMailSmartMailCommandApplier> commandApplier_;
    JCSRsvpAction *rsvpActionProto_;
    BOOL canSelectResponse_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTISmartMailSmartMailComponentContextImpl *smartMailContext_;
    JBTCCachedValue *eventResponseOptions_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getSelectedResponseOption;
+ (id)__annotations_selectResponseWithJCSRsvpResponse_TypeEnum_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_selectResponseTypeWithJBTSmartMailEvent_EventResponseOption_EventResponseTypeEnum_withJBTCallback_withJBTSpan__params;
+ (void)initialize;
- (void)dealloc;
- (id)getSelectedResponseOption;
- (void)selectResponseWithJCSRsvpResponse_TypeEnum:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)selectResponseTypeWithJBTSmartMailEvent_EventResponseOption_EventResponseTypeEnum:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (BOOL)canSelectResponse;
- (id)getResponseOptions;
- (id)getActionType;
- (id)initWithJCSRsvpAction:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJCSAssignedId:(id)arg5 withBoolean:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

