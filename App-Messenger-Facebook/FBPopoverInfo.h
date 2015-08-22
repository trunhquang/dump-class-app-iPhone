//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIBarButtonItem, UIView;

@interface FBPopoverInfo : NSObject
{
    BOOL _hideArrow;
    BOOL _jewelsArePassthrough;
    UIView *_sourceView;
    UIView *_hostingView;
    UIBarButtonItem *_sourceButtonItem;
    NSArray *_passthroughViews;
    unsigned int _arrowDirections;
    Class _backgroundViewClass;
    struct CGSize _contentSize;
    struct CGRect _sourceRect;
}

@property(nonatomic) BOOL jewelsArePassthrough; // @synthesize jewelsArePassthrough=_jewelsArePassthrough;
@property(nonatomic) BOOL hideArrow; // @synthesize hideArrow=_hideArrow;
@property(retain, nonatomic) Class backgroundViewClass; // @synthesize backgroundViewClass=_backgroundViewClass;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) unsigned int arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(retain, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(retain, nonatomic) UIBarButtonItem *sourceButtonItem; // @synthesize sourceButtonItem=_sourceButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;

@end
