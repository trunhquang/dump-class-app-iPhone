//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTParticipant_TypeEnum;

@protocol JBTParticipantSet_Builder <NSObject, JavaObject>
- (id <JBTParticipantSet>)build;
- (id <JBTParticipantSet_Builder>)removeAllWithJavaUtilList:(id <JavaUtilList>)arg1;
- (id <JBTParticipantSet_Builder>)removeTypeWithJBTParticipant_TypeEnum:(JBTParticipant_TypeEnum *)arg1;
- (id <JBTParticipantSet_Builder>)removeWithJBTContactReference:(id <JBTContactReference>)arg1;
- (id <JBTParticipantSet_Builder>)addAllWithJBTParticipantSet:(id <JBTParticipantSet>)arg1;
- (id <JBTParticipantSet_Builder>)addAllWithJBTParticipant_TypeEnum:(JBTParticipant_TypeEnum *)arg1 withJavaUtilList:(id <JavaUtilList>)arg2;
- (id <JBTParticipantSet_Builder>)addWithJBTParticipant:(id <JBTParticipant>)arg1;
- (id <JBTParticipantSet_Builder>)addWithJBTParticipant_TypeEnum:(JBTParticipant_TypeEnum *)arg1 withJBTContactReference:(id <JBTContactReference>)arg2;
@end

