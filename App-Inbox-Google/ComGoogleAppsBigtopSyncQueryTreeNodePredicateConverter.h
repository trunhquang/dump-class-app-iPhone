//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncQueryTreeTreeTraverser.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncQueryTreeNodePredicateConverter : ComGoogleAppsBigtopSyncQueryTreeTreeTraverser
{
    NSString *defaultFieldName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)onOpenPhraseNodeWithComGoogleAppsBigtopSyncQueryNodesOpenPhraseNode:(id)arg1;
- (id)onOpenTermNodeWithComGoogleAppsBigtopSyncQueryNodesOpenTermNode:(id)arg1;
- (id)onPhraseNodeWithComGoogleAppsBigtopSyncQueryNodesPhraseNode:(id)arg1;
- (id)onTermNodeWithComGoogleAppsBigtopSyncQueryNodesTermNode:(id)arg1;
- (id)onFieldEqualsNodeWithComGoogleAppsBigtopSyncQueryNodesFieldEqualsNode:(id)arg1;
- (id)onGroupNodeWithComGoogleAppsBigtopSyncQueryNodesGroupNode:(id)arg1;
- (id)onNotNodeWithComGoogleAppsBigtopSyncQueryNodesNotNode:(id)arg1;
- (id)onOrNodeWithComGoogleAppsBigtopSyncQueryNodesOrNode:(id)arg1;
- (id)onAndNodeWithComGoogleAppsBigtopSyncQueryNodesAndNode:(id)arg1;
- (id)convertWithComGoogleAppsBigtopSyncQueryNodesNode:(id)arg1;
- (id)getDefaultFieldName;
- (id)initWithNSString:(id)arg1;

@end

