//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopDataEntitiesEntityCumulusProtoAdapter.h"

@class JBTCTypeIdStringUtil, NSString;

@interface ComGoogleAppsBigtopDataSettingsSettingsEntityCumulusProtoAdapter : NSObject <ComGoogleAppsBigtopDataEntitiesEntityCumulusProtoAdapter>
{
    JBTCTypeIdStringUtil *typeIdStringUtil_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJBTCTypeIdStringUtil_;
+ (void)initialize;
- (void)dealloc;
- (id)getIdForNetworkProtocolWithNSString:(id)arg1;
- (id)baseObjectFromEntityWithComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg1;
- (id)getTypeIdString;
- (id)getQueryKeyString;
- (id)getMuxingPrefix;
- (id)getSlicesToSync;
- (id)extractEntityFromBaseObjectWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1;
- (id)initWithJBTCTypeIdStringUtil:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

