//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTSmartMailComponent_TypeEnum, JBTSmartMailComponent_ViewModeEnum;

@protocol JBTSmartMailComponent <NSObject, JavaObject>
- (void)recordViewWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1;
- (id <JBTSmartMailComponentContext>)getContext;
- (id <JBTTime>)getSortTime;
- (id <JBTGoTo>)getStructuredLink;
- (id <JBTOrganization>)getPublisher;
- (id <JavaUtilList>)getActions;
- (id <JavaUtilList>)getActionsForViewWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1;
- (JBTSmartMailComponent_TypeEnum *)getType;
@end

