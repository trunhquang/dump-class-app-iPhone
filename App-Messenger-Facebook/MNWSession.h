//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface MNWSession : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    NSString *_session_userFBID;
}

+ (id)sessionWithUserFBID:(id)arg1;
+ (id)noSession;
- (void).cxx_destruct;
- (void)matchNoSession:(CDUnknownBlockType)arg1 session:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

