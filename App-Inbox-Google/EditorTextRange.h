//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextRange.h"

#import "NSCopying.h"

@class EditorTextPosition;

@interface EditorTextRange : UITextRange <NSCopying>
{
    BOOL _reversed;
    EditorTextPosition *start;
    EditorTextPosition *end;
}

+ (id)textRangeFromTextPosition:(id)arg1;
+ (id)textRangeFromPosition:(int)arg1;
+ (id)textRangeFromNSRange:(struct _NSRange)arg1;
@property(nonatomic, getter=isReversed) BOOL reversed; // @synthesize reversed=_reversed;
@property(retain, nonatomic) EditorTextPosition *end; // @synthesize end;
@property(retain, nonatomic) EditorTextPosition *start; // @synthesize start;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned int length;
- (BOOL)isEmpty;
- (BOOL)containsPosition:(id)arg1;
- (id)initWithStartTextPosition:(id)arg1 endTextPosition:(id)arg2;
- (id)initWithStartPosition:(int)arg1 endPosition:(int)arg2;

@end

