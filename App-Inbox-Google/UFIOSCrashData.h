//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface UFIOSCrashData : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *exceptionClassName; // @dynamic exceptionClassName;
@property(retain, nonatomic) NSString *exceptionMessage; // @dynamic exceptionMessage;
@property(nonatomic) BOOL hasExceptionClassName; // @dynamic hasExceptionClassName;
@property(nonatomic) BOOL hasExceptionMessage; // @dynamic hasExceptionMessage;
@property(nonatomic) BOOL hasSignal; // @dynamic hasSignal;
@property(nonatomic) BOOL hasStackTrace; // @dynamic hasStackTrace;
@property(nonatomic) BOOL hasThrowClassName; // @dynamic hasThrowClassName;
@property(nonatomic) BOOL hasThrowFileName; // @dynamic hasThrowFileName;
@property(nonatomic) BOOL hasThrowLineNumber; // @dynamic hasThrowLineNumber;
@property(nonatomic) BOOL hasThrowMethodName; // @dynamic hasThrowMethodName;
@property(nonatomic) int signal; // @dynamic signal;
@property(retain, nonatomic) NSString *stackTrace; // @dynamic stackTrace;
@property(retain, nonatomic) NSString *throwClassName; // @dynamic throwClassName;
@property(retain, nonatomic) NSString *throwFileName; // @dynamic throwFileName;
@property(nonatomic) int throwLineNumber; // @dynamic throwLineNumber;
@property(retain, nonatomic) NSString *throwMethodName; // @dynamic throwMethodName;

@end

