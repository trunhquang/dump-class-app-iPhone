//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuHttpDeserializer.h"

@class NSString;

@interface ComGoogleCumulusCommonNetHttpSerializationStringDeserializer : NSObject <JCGCuHttpDeserializer>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (long long)copy__WithJavaLangReadable:(id)arg1 withJavaLangAppendable:(id)arg2;
+ (id)toStringBuilderWithJavaLangReadable:(id)arg1;
- (id)init;
- (id)deserializeWithJavaIoInputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

