//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonUndoer.h"

@class JBTIClustersClusterConfigImpl, NSString;

@interface JBTIClustersClusterConfigUndoer : NSObject <JBTICommonUndoer>
{
    JBTIClustersClusterConfigImpl *originalClusterConfig_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)undoWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)initWithJBTIClustersClusterConfigImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

