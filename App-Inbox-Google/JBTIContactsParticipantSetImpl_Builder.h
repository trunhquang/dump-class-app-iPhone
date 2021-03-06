//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTParticipantSet_Builder.h"

@class NSString;

@interface JBTIContactsParticipantSetImpl_Builder : NSObject <JBTParticipantSet_Builder>
{
    id <JavaUtilMap> participantsByType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)removeAllWithJavaUtilList:(id)arg1;
- (void)removeFromInnerSetWithJavaUtilSet:(id)arg1 withJBTContactReference:(id)arg2;
- (id)removeTypeWithJBTParticipant_TypeEnum:(id)arg1;
- (id)removeWithJBTContactReference:(id)arg1;
- (id)addAllWithJBTParticipantSet:(id)arg1;
- (id)addAllWithJBTParticipant_TypeEnum:(id)arg1 withJavaUtilList:(id)arg2;
- (id)addWithJBTParticipant:(id)arg1;
- (id)addWithJBTParticipant_TypeEnum:(id)arg1 withJBTContactReference:(id)arg2;
- (id)initWithJavaUtilMap:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

