//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncQueryNodesNode.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncQueryNodesGroupNode : NSObject <ComGoogleAppsBigtopSyncQueryNodesNode>
{
    id <JavaUtilList> children_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)ofWithComGoogleAppsBigtopSyncQueryNodesNodeArray:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getNodeType;
- (id)getChildren;
- (id)initWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

