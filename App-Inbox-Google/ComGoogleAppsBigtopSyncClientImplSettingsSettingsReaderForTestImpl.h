//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplSettingsSettingsReader.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplSettingsSettingsReaderForTestImpl : NSObject <ComGoogleAppsBigtopSyncClientImplSettingsSettingsReader>
{
    id <JavaUtilMap> settings_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)readWithJBTICommonSapiCallback:(id)arg1 withJBTICommonSapiSpan:(id)arg2;
- (id)initWithJavaUtilMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

