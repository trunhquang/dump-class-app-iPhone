//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSRegularExpression, NSString;

@interface ZRUrlRewriteRule : NSObject <NSCoding>
{
    NSRegularExpression *_matcher;
    NSString *_replacer;
    int _flags;
}

+ (id)ruleFromDictionary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) int flags; // @synthesize flags=_flags;
@property(readonly, retain, nonatomic) NSString *replacer; // @synthesize replacer=_replacer;
@property(readonly, retain, nonatomic) NSRegularExpression *matcher; // @synthesize matcher=_matcher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMatcher:(id)arg1 replacer:(id)arg2 flags:(int)arg3;

@end

