//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class IOSObjectArray, JCSSmartMailTextIdEnum, NSString;

@protocol JBTISmartMailSmartMailTranslator <NSObject, JavaObject>
- (NSString *)getPluralTextWithJCSSmartMailTextIdEnum:(JCSSmartMailTextIdEnum *)arg1 withInt:(int)arg2 withNSStringArray:(IOSObjectArray *)arg3;
- (BOOL)hasTextWithJCSSmartMailTextIdEnum:(JCSSmartMailTextIdEnum *)arg1;
- (NSString *)getTextWithJCSSmartMailTextIdEnum:(JCSSmartMailTextIdEnum *)arg1 withNSStringArray:(IOSObjectArray *)arg2;
@end

