//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTSnoozePresets_SnoozePreset_TypeEnum;

@protocol JBTSnoozePresets_SnoozePresetsEdit <NSObject, JavaObject>
- (void)saveWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <JBTSnoozePresets_SnoozePresetsEdit>)setFromSnoozeAckWithBoolean:(BOOL)arg1;
- (id <JBTSnoozePresets_SnoozePresetsEdit>)setTimeOfDayPresetWithJBTSnoozePresets_SnoozePreset_TypeEnum:(JBTSnoozePresets_SnoozePreset_TypeEnum *)arg1 withInt:(int)arg2;
@end

