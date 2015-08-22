//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFModel.h"

#import "PSPDFJSONSerializing.h"
#import "PSPDFJavaScriptActionEventJSExport.h"

@class NSArray, NSNumber, NSString;

@interface PSPDFJavaScriptActionEvent : PSPDFModel <PSPDFJavaScriptActionEventJSExport, PSPDFJSONSerializing>
{
    NSString *_change;
    id _changeEx;
    NSNumber *_commitKey;
    NSNumber *_fieldFull;
    NSNumber *_keyDown;
    NSNumber *_modifier;
    NSString *_name;
    NSNumber *_rc;
    NSArray *_richChange;
    NSArray *_richChangeEx;
    NSArray *_richValue;
    NSNumber *_selEnd;
    NSNumber *_selStart;
    NSNumber *_shift;
    id _source;
    id _target;
    NSString *_targetName;
    NSString *_type;
    id _value;
    NSNumber *_willCommit;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned int)modelVersion;
@property(readonly, nonatomic) NSNumber *willCommit; // @synthesize willCommit=_willCommit;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) id source; // @synthesize source=_source;
@property(readonly, nonatomic) NSNumber *shift; // @synthesize shift=_shift;
@property(retain, nonatomic) NSNumber *selStart; // @synthesize selStart=_selStart;
@property(retain, nonatomic) NSNumber *selEnd; // @synthesize selEnd=_selEnd;
@property(copy, nonatomic) NSArray *richValue; // @synthesize richValue=_richValue;
@property(copy, nonatomic) NSArray *richChangeEx; // @synthesize richChangeEx=_richChangeEx;
@property(copy, nonatomic) NSArray *richChange; // @synthesize richChange=_richChange;
@property(retain, nonatomic) NSNumber *rc; // @synthesize rc=_rc;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *modifier; // @synthesize modifier=_modifier;
@property(readonly, nonatomic) NSNumber *keyDown; // @synthesize keyDown=_keyDown;
@property(readonly, nonatomic) NSNumber *fieldFull; // @synthesize fieldFull=_fieldFull;
@property(readonly, nonatomic) NSNumber *commitKey; // @synthesize commitKey=_commitKey;
@property(readonly, nonatomic) id changeEx; // @synthesize changeEx=_changeEx;
@property(copy, nonatomic) NSString *change; // @synthesize change=_change;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *valueAsString;
@property(readonly, nonatomic) NSNumber *valueAsNumber;
- (id)dictionaryValue;

@end

