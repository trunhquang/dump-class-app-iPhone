//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNEditablePeopleCellViewModel : FBValueObject <NSCopying>
{
    BOOL _isThreadNameCustom;
    NSString *_originalLabelText;
}

@property(readonly, nonatomic) BOOL isThreadNameCustom; // @synthesize isThreadNameCustom=_isThreadNameCustom;
@property(readonly, copy, nonatomic) NSString *originalLabelText; // @synthesize originalLabelText=_originalLabelText;
- (void).cxx_destruct;
- (id)initWithOriginalLabelText:(id)arg1 isThreadNameCustom:(BOOL)arg2;

@end
