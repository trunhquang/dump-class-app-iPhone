//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTGoTo.h"

@class JBTCCachedValue, JBTISmartMailSmartMailComponentContextImpl, JCSAssignedId, JCSGoTo, NSString;

@interface JBTISmartMailGoToImpl : NSObject <JBTGoTo>
{
    JBTISmartMailSmartMailComponentContextImpl *smartMailContext_;
    JCSGoTo *goToProto_;
    JBTCCachedValue *cachedIconType_;
    JCSAssignedId *thingAssignedId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_thingAssignedId_;
+ (id)__annotations_getUserLocationType;
+ (id)__annotations_initWithJCSGoTo_withJBTISmartMailSmartMailComponentContextImpl_withJCSAssignedId__params;
- (void)dealloc;
- (id)getUserLocationType;
- (BOOL)hasUserLocationType;
- (void)recordClick;
- (BOOL)canMarkAsClicked;
- (id)getDetail;
- (BOOL)hasDetail;
- (id)getText;
- (BOOL)isClicked;
- (id)getGoToUrl;
- (id)getIconType;
- (id)getActionType;
- (id)initWithJCSGoTo:(id)arg1 withJBTISmartMailSmartMailComponentContextImpl:(id)arg2 withJCSAssignedId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

