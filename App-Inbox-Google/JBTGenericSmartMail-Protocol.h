//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTSmartMailComponent.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTSmartMailComponent_ViewModeEnum;

@protocol JBTGenericSmartMail <JBTSmartMailComponent, NSObject, JavaObject>
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1;
- (id <JBTGenericSmartMailLayout>)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1;
@end

