//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiTypeObjectId.h"

@class NSString;

@interface ComGoogleCumulusApiTypeObjectReference : ComGoogleCumulusApiTypeObjectId
{
    id <JavaUtilSet> slices_;
    NSString *version__;
    int localVersion_;
}

+ (id)newObjectReferenceWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;
+ (id)newObjectReferenceWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3;
+ (id)newObjectReferenceWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3 withInt:(int)arg4;
+ (id)newObjectReferenceWithNSString:(id)arg1 withNSString:(id)arg2 withNSStringArray:(id)arg3;
+ (id)newObjectReferenceWithNSString:(id)arg1 withJavaUtilCollection:(id)arg2;
+ (id)newObjectReferenceWithNSString:(id)arg1;
- (void)dealloc;
- (id)toRefProto;
- (id)initWithNSString:(id)arg1 withJavaUtilCollection:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4;
- (void)appendWithJavaLangStringBuilder:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)getLocalVersion;
- (BOOL)hasVersion;
- (id)getVersion;
- (id)getSliceIdList;
- (int)getSliceCount;
- (id)getSlices;

@end

