//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonBaseConverter.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonPrimitivesLongs_LongConverter : ComGoogleCommonBaseConverter <JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (id)init;
- (id)readResolve;
@property(readonly, copy) NSString *description;
- (id)doBackwardWithId:(id)arg1;
- (id)doForwardWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

