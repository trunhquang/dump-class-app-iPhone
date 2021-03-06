//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBInlineComposerMagicStoryPrompt, FBInlineComposerPhotoRemindersPrompt, FBMemProductionPrompt;

@interface FBInlineComposerPrompt : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMemProductionPrompt *_productionPrompt_productionPrompt;
    BOOL _postChannelPrompt_hasUpdatedStories;
    FBInlineComposerPhotoRemindersPrompt *_photoReminderPrompt_prompt;
    FBInlineComposerMagicStoryPrompt *_magicStoryPrompt_prompt;
}

+ (id)productionPromptWithProductionPrompt:(id)arg1;
+ (id)postChannelPromptWithHasUpdatedStories:(BOOL)arg1;
+ (id)photoReminderPromptWithPrompt:(id)arg1;
+ (id)mediaPickerPrompt;
+ (id)magicStoryPromptWithPrompt:(id)arg1;
- (void).cxx_destruct;
- (void)matchMediaPickerPrompt:(CDUnknownBlockType)arg1 productionPrompt:(CDUnknownBlockType)arg2 postChannelPrompt:(CDUnknownBlockType)arg3 photoReminderPrompt:(CDUnknownBlockType)arg4 magicStoryPrompt:(CDUnknownBlockType)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

