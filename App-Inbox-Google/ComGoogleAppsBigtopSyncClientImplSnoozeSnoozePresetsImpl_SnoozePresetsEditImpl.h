//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSnoozePresets_SnoozePresetsEdit.h"

@class ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl, JavaLangInteger, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl_SnoozePresetsEditImpl : NSObject <JBTSnoozePresets_SnoozePresetsEdit>
{
    ComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl *this$0_;
    JavaLangInteger *morningSecondsAfterMidnight_;
    JavaLangInteger *afternoonSecondsAfterMidnight_;
    JavaLangInteger *eveningSecondsAfterMidnight_;
    id <JavaUtilSet> saveTags_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_eveningSecondsAfterMidnight_;
+ (id)__annotations_afternoonSecondsAfterMidnight_;
+ (id)__annotations_morningSecondsAfterMidnight_;
+ (id)__annotations_saveWithJBTCallback_withJBTSpan__params;
- (void)dealloc;
- (id)getSaveTags;
- (void)saveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)setFromSnoozeAckWithBoolean:(BOOL)arg1;
- (id)setTimeOfDayPresetWithJBTSnoozePresets_SnoozePreset_TypeEnum:(id)arg1 withInt:(int)arg2;
- (id)initWithComGoogleAppsBigtopSyncClientImplSnoozeSnoozePresetsImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

