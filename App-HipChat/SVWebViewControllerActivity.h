//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

@class NSString, NSURL;

@interface SVWebViewControllerActivity : UIActivity
{
    NSURL *_URLToOpen;
    NSString *_schemePrefix;
}

@property(retain, nonatomic) NSString *schemePrefix; // @synthesize schemePrefix=_schemePrefix;
@property(retain, nonatomic) NSURL *URLToOpen; // @synthesize URLToOpen=_URLToOpen;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityType;

@end

