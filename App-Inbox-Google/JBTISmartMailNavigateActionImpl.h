//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTNavigateAction.h"

@class NSString;

@interface JBTISmartMailNavigateActionImpl : NSObject <JBTNavigateAction>
{
    id <JBTAddress> address_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getLongitude;
- (id)getLatitude;
- (id)getName;
- (id)getActionType;
- (id)initWithJBTAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

