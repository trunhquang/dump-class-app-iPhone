//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilEventObject.h"

@class NSString;

@interface JavaBeansPropertyChangeEvent : JavaUtilEventObject
{
    NSString *propertyName_;
    id oldValue_;
    id newValue_;
    id propagationId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getNewValue;
- (id)getOldValue;
- (id)getPropagationId;
- (void)setPropagationIdWithId:(id)arg1;
- (id)getPropertyName;
- (id)initWithId:(id)arg1 withNSString:(id)arg2 withId:(id)arg3 withId:(id)arg4;

@end

