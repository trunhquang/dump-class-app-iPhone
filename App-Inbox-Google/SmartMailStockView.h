//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmartMailSnippetView.h"

#import "SmartMailLinkViewDelegate.h"

@class NSString, SmartMailLinkView, UIView;

@interface SmartMailStockView : SmartMailSnippetView <SmartMailLinkViewDelegate>
{
    UIView *container_;
    SmartMailLinkView *disclaimerView_;
    id <JBTStock> stock_;
    id <SmartMailStockViewDelegate> _delegate;
}

+ (float)defaultHeight;
+ (void)initialize;
@property(nonatomic) __weak id <SmartMailStockViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <JBTStock> stock; // @synthesize stock=stock_;
- (void).cxx_destruct;
- (void)linkView:(id)arg1 didSelectLink:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)createSubviews;
- (BOOL)isInteractive;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

