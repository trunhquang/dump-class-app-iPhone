//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusApiTypeObjectId, ComGoogleCumulusCommonBaseProto_ObjectId, NSString;

@protocol ComGoogleCumulusApiObjectHandle <NSObject, JavaObject>
- (ComGoogleCumulusCommonBaseProto_ObjectId *)getObjectIdProto;
- (NSString *)serialize;
- (ComGoogleCumulusApiTypeObjectId *)getPermanentId;
- (BOOL)isPermanent;
@end

