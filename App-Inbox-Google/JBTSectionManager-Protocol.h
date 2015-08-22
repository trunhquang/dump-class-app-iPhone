//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTSectionManager <NSObject, JavaObject>
- (BOOL)isInitialized;
- (void)setMidnightTimeSecWithLong:(long long)arg1;
- (id <JBTItemCount>)getSweepableItemCountWithJBTSection:(id <JBTSection>)arg1;
- (id <JBTSection>)getSectionByIndexWithInt:(int)arg1;
- (int)getSize;
- (id <JavaUtilList>)getSections;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
@end

