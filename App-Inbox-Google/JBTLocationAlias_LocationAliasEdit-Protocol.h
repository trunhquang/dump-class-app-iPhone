//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTLocationAlias_LocationTypeEnum, NSString;

@protocol JBTLocationAlias_LocationAliasEdit <NSObject, JavaObject>
- (void)saveWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <JBTLocationAlias_LocationAliasEdit>)setCategoryIdWithNSString:(NSString *)arg1;
- (id <JBTLocationAlias_LocationAliasEdit>)setLocationTypeWithJBTLocationAlias_LocationTypeEnum:(JBTLocationAlias_LocationTypeEnum *)arg1;
- (id <JBTLocationAlias_LocationAliasEdit>)setLocationWithJBTLocation:(id <JBTLocation>)arg1;
- (id <JBTLocationAlias_LocationAliasEdit>)setNameWithNSString:(NSString *)arg1;
@end

