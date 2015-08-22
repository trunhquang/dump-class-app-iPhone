//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RowInfo : NSObject
{
    BOOL selectable_;
    unsigned int _accessoryType;
    CDUnknownBlockType _action;
    NSString *_detailedText;
    NSString *_text;
    CDUnknownBlockType _isToggleEnabled;
    CDUnknownBlockType _toggleChanged;
    CDUnknownBlockType _doneActionChanged;
    CDUnknownBlockType _updateTimezoneChanged;
}

@property(copy, nonatomic) CDUnknownBlockType updateTimezoneChanged; // @synthesize updateTimezoneChanged=_updateTimezoneChanged;
@property(copy, nonatomic) CDUnknownBlockType doneActionChanged; // @synthesize doneActionChanged=_doneActionChanged;
@property(copy, nonatomic) CDUnknownBlockType toggleChanged; // @synthesize toggleChanged=_toggleChanged;
@property(copy, nonatomic) CDUnknownBlockType isToggleEnabled; // @synthesize isToggleEnabled=_isToggleEnabled;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *detailedText; // @synthesize detailedText=_detailedText;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) unsigned int accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) BOOL selectable; // @synthesize selectable=selectable_;
- (void).cxx_destruct;
- (id)init;

@end

