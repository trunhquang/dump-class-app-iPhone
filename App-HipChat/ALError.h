//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALError : NSObject
{
    int _err_code;
    NSString *_err_message;
}

+ (id)errorWithCode:(int)arg1 withMessage:(id)arg2;
@property(copy, nonatomic) NSString *err_message; // @synthesize err_message=_err_message;
@property(nonatomic) int err_code; // @synthesize err_code=_err_code;
- (id)description;
- (void)dealloc;
- (id)initWithCode:(int)arg1 withMessage:(id)arg2;
- (id)init;

@end

