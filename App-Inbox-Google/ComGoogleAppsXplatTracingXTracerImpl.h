//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatTracingXTracer.h"

@class IOSClass;

@interface ComGoogleAppsXplatTracingXTracerImpl : ComGoogleAppsXplatTracingXTracer
{
    IOSClass *sourceClass_;
    id tracerState_;
    // Error parsing type: A^v, name: tracersWithLevel_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_tracersWithLevel_;
+ (id)__annotations_tracerState_;
+ (void)initialize;
- (void)__javaClone;
- (void)dealloc;
- (void)markCurrentThreadAsAsync;
- (id)tracingAtWithComGoogleAppsXplatTracingTracingProto_LevelEnum:(id)arg1;
- (id)getTracerState;
- (id)getBackend;
- (id)initWithIOSClass:(id)arg1;

@end

