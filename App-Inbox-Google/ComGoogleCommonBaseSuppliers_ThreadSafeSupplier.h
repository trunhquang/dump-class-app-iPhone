//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBaseSupplier.h"
#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonBaseSuppliers_ThreadSafeSupplier : NSObject <ComGoogleCommonBaseSupplier, JavaIoSerializable>
{
    id <ComGoogleCommonBaseSupplier> delegate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)get;
- (id)initWithComGoogleCommonBaseSupplier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

