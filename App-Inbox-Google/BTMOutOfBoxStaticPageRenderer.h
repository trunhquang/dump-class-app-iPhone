//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTMOutOfBoxPageRenderer.h"

@class BTMOutOfBoxStaticPageDescription, NSString, UIImageView, UILabel;

@interface BTMOutOfBoxStaticPageRenderer : NSObject <BTMOutOfBoxPageRenderer>
{
    BTMOutOfBoxStaticPageDescription *_description;
    CDStruct_6c258dd9 _layoutConstraints;
    UIImageView *_imageView;
    UILabel *_textView;
    float _parallaxBaseCenter;
    float _parallaxTravel;
}

+ (id)rendererForDescription:(id)arg1 layoutConstants:(CDStruct_6c258dd9)arg2;
- (void).cxx_destruct;
- (id)accessibilityElement;
- (void)updateContentWithProgress:(float)arg1;
- (void)addNonScrollingContentToView:(id)arg1 withinBounds:(struct CGRect)arg2;
- (void)addScrollingContentToView:(id)arg1 withinBounds:(struct CGRect)arg2;
- (id)initWithDescription:(id)arg1 layoutConstraints:(CDStruct_6c258dd9)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

