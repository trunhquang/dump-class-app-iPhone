//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTLocationAlias_LocationAliasEdit.h"

@class ComGoogleAppsBigtopServicesLocationaliasesBigTopLocationAlias_Builder, ComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl, NSString;

@interface ComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_LocationAliasEditImpl : NSObject <JBTLocationAlias_LocationAliasEdit>
{
    ComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl *this$0_;
    ComGoogleAppsBigtopServicesLocationaliasesBigTopLocationAlias_Builder *builder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_saveWithJBTCallback_withJBTSpan__params;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl:(id)arg1;
- (void)saveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)setCategoryIdWithNSString:(id)arg1;
- (id)setLocationTypeWithJBTLocationAlias_LocationTypeEnum:(id)arg1;
- (id)setLocationWithJBTLocation:(id)arg1;
- (id)setNameWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

