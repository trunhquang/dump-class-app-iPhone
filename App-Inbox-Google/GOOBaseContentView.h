//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GOOContentView.h"

@class NSString;

@interface GOOBaseContentView : UIView <GOOContentView>
{
    BOOL _selected;
    BOOL _highlighted;
    id <GOOContentViewObject> _object;
}

@property(readonly, nonatomic) id <GOOContentViewObject> object; // @synthesize object=_object;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

