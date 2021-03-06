//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInvalidating.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface FBPreferences : NSObject <FBInvalidating>
{
    NSString *_ID;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidated;
    BOOL _protectionDisabled;
}

+ (id)preferencesWithID:(id)arg1;
+ (id)appPreferences;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (unsigned int)count;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)synchronize;
- (void)_disableDataProtectionIfNeeded;
- (void)clear;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (int)integerForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)_scheduleSynchronize;
- (void)dealloc;
- (id)initWithID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

