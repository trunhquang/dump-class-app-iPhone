//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface _FBMentionDecoratorContext : NSObject <NSCopying>
{
    BOOL _canExtendRange;
    unsigned int _caretPosition;
    struct _NSRange _replacementRange;
}

@property(nonatomic) BOOL canExtendRange; // @synthesize canExtendRange=_canExtendRange;
@property(nonatomic) unsigned int caretPosition; // @synthesize caretPosition=_caretPosition;
@property(nonatomic) struct _NSRange replacementRange; // @synthesize replacementRange=_replacementRange;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

