//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "MNMessageCellLayoutElement.h"
#import "NSCopying.h"

@class NSString;

@interface MNMessageCellBlockViewLayoutElement : FBValueObject <MNMessageCellLayoutElement, NSCopying>
{
    float _height;
    float _leftMargin;
    float _rightMargin;
    unsigned int _elementCategory;
    NSString *_elementKind;
}

+ (id)newWithHeight:(float)arg1 leftMargin:(float)arg2 rightMargin:(float)arg3 elementCategory:(unsigned int)arg4 elementKind:(id)arg5;
@property(readonly, copy, nonatomic) NSString *elementKind; // @synthesize elementKind=_elementKind;
@property(readonly, nonatomic) unsigned int elementCategory; // @synthesize elementCategory=_elementCategory;
@property(readonly, nonatomic) float rightMargin; // @synthesize rightMargin=_rightMargin;
@property(readonly, nonatomic) float leftMargin; // @synthesize leftMargin=_leftMargin;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)initWithHeight:(float)arg1 leftMargin:(float)arg2 rightMargin:(float)arg3 elementCategory:(unsigned int)arg4 elementKind:(id)arg5;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

