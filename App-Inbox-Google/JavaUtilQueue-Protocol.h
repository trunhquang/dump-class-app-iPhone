//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilCollection.h"
#import "NSObject.h"

@protocol JavaUtilQueue <JavaUtilCollection, NSObject, JavaObject>
- (id)peek;
- (id)element;
- (id)poll;
- (id)remove;
- (BOOL)offerWithId:(id)arg1;
- (BOOL)addWithId:(id)arg1;
@end

