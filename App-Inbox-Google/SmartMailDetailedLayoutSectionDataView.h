//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface SmartMailDetailedLayoutSectionDataView : UIView
{
    UIView *badgeBackground_;
    UILabel *badgeLabel_;
    BOOL collapsed_;
    id <JBTGenericSmartMailDetailedLayoutSectionData> sectionData_;
    UILabel *titleLabel_;
    UILabel *valueLabel_;
    id <SmartMailInteractionSupport> _smartMailDelegate;
}

+ (int)numberOfLinesForCollapsed:(BOOL)arg1;
+ (id)attributedValueFromSectionData:(id)arg1 collapsed:(BOOL)arg2;
+ (id)attributedTitleFromSectionData:(id)arg1 collapsed:(BOOL)arg2;
+ (id)textColorFromStatus:(id)arg1 emphasized:(BOOL)arg2;
+ (id)backgroundColorFromStatus:(id)arg1;
+ (float)heightWithSectionData:(id)arg1 width:(float)arg2 collapsed:(BOOL)arg3;
+ (void)initialize;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate; // @synthesize smartMailDelegate=_smartMailDelegate;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (id)accessibilityLabel;
- (void)tapped:(id)arg1;
- (void)updateWithSectionData;
- (void)createSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSectionData:(id)arg1 collapsed:(BOOL)arg2;

@end

