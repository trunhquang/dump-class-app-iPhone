//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusQueryQueryProto_Result_SourceEnum, JBTCBigTopObjectOriginationInfo, NSString;

@interface JBTICommonObjectMonitorChange : NSObject
{
    id <ComGoogleProtobufMessageLite> object_;
    ComGoogleCumulusQueryQueryProto_Result_SourceEnum *source_;
    BOOL isExpectingMoreChanges_;
    id <JBTSpan> span_;
    NSString *version__;
    NSString *sourceAnnotation_;
    JBTCBigTopObjectOriginationInfo *originationInfo_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getOriginationInfo;
- (id)getVersion;
- (id)getSpan;
- (BOOL)isExpectingMoreChanges;
- (id)getSourceAnnotation;
- (id)getSource;
- (id)getObject;
- (id)initWithComGoogleProtobufMessageLite:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_SourceEnum:(id)arg2 withNSString:(id)arg3 withBoolean:(BOOL)arg4 withJBTSpan:(id)arg5 withNSString:(id)arg6 withJBTCBigTopObjectOriginationInfo:(id)arg7;

@end

