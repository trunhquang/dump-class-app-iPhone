//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTTaskDueDate.h"

@class ComGoogleCaribouTasksDateTime, JBTTaskDueDate_TypeEnum, NSString;

@interface JBTITasksTaskDueDateFactory_TaskDueDateImpl : NSObject <JBTTaskDueDate>
{
    ComGoogleCaribouTasksDateTime *dateTime_;
    long long dueDateSec_;
    JBTTaskDueDate_TypeEnum *type_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)getType;
- (long long)getDueDateSec;
- (id)getDateTime;
- (id)initWithComGoogleCaribouTasksDateTime:(id)arg1 withLong:(long long)arg2 withJBTTaskDueDate_TypeEnum:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

