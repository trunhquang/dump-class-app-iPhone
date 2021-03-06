//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface RuleResult : NSObject <TBase, NSCoding>
{
    NSString *__rule;
    int __action;
    NSString *__message;
    NSString *__data;
    BOOL __rule_isset;
    BOOL __action_isset;
    BOOL __message_isset;
    BOOL __data_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetData;
- (BOOL)dataIsSet;
@property(retain, nonatomic, getter=data, setter=setData:) NSString *data;
- (void)unsetMessage;
- (BOOL)messageIsSet;
@property(retain, nonatomic, getter=message, setter=setMessage:) NSString *message;
- (void)unsetAction;
- (BOOL)actionIsSet;
@property(nonatomic, getter=action, setter=setAction:) int action;
- (void)unsetRule;
- (BOOL)ruleIsSet;
@property(retain, nonatomic, getter=rule, setter=setRule:) NSString *rule;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRule:(id)arg1 action:(int)arg2 message:(id)arg3 data:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

