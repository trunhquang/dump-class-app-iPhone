//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMStringWithRedactedDescription, FBMUser, NSString;

@interface MNThreadDetailsContactInfoViewModel : FBValueObject <NSCopying>
{
    BOOL _audioEnabled;
    BOOL _videoEnabled;
    BOOL _editModeEnabled;
    FBMStringWithRedactedDescription *_contactName;
    NSString *_presenceText;
    NSString *_textFieldThreadName;
    FBMUser *_user;
}

@property(readonly, nonatomic) BOOL editModeEnabled; // @synthesize editModeEnabled=_editModeEnabled;
@property(readonly, nonatomic) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(readonly, nonatomic) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, copy, nonatomic) FBMUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *textFieldThreadName; // @synthesize textFieldThreadName=_textFieldThreadName;
@property(readonly, copy, nonatomic) NSString *presenceText; // @synthesize presenceText=_presenceText;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *contactName; // @synthesize contactName=_contactName;
- (void).cxx_destruct;
- (id)initWithContactName:(id)arg1 presenceText:(id)arg2 textFieldThreadName:(id)arg3 user:(id)arg4 audioEnabled:(BOOL)arg5 videoEnabled:(BOOL)arg6 editModeEnabled:(BOOL)arg7;

@end

