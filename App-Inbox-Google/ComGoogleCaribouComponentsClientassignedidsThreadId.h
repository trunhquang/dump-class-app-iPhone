//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCaribouComponentsClientassignedidsMessageOrThreadId.h"

@interface ComGoogleCaribouComponentsClientassignedidsThreadId : ComGoogleCaribouComponentsClientassignedidsMessageOrThreadId
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_looksLikeValidIdWithNSString__params;
+ (id)parseIdStringWithNSString:(id)arg1;
+ (BOOL)looksLikeValidIdWithNSString:(id)arg1;
+ (id)forServerIdWithLong:(long long)arg1;
+ (id)forPermanentIdWithNSString:(id)arg1;
- (BOOL)isThreadId;
- (BOOL)isMessageId;
- (id)getTypePrefix;
- (id)initWithLong:(long long)arg1;
- (id)initWithNSString:(id)arg1;

@end

