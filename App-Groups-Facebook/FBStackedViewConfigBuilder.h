//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFIGConfigBuilder.h"

@class NSString, UIColor, UIView;

@interface FBStackedViewConfigBuilder : NSObject <FBFIGConfigBuilder>
{
    UIColor *_backgroundColor;
    UIView *_backgroundView;
    unsigned int _layoutType;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)builderForInstance:(id)arg1;
+ (id)builderFromConfig:(id)arg1;
+ (id)builderIgnoringClassLevelOverrides;
+ (id)builder;
@property(nonatomic) unsigned int layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)_init;
- (id)build;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

