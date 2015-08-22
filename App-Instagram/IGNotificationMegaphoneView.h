//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGenericMegaphoneView.h"

@class NSString;

@interface IGNotificationMegaphoneView : IGGenericMegaphoneView
{
    BOOL _megaphoneSeen;
    id <IGNotificationMegaphoneViewDelegate> _notificationDelegate;
    NSString *_source;
}

@property(nonatomic) BOOL megaphoneSeen; // @synthesize megaphoneSeen=_megaphoneSeen;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) __weak id <IGNotificationMegaphoneViewDelegate> notificationDelegate; // @synthesize notificationDelegate=_notificationDelegate;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1;
- (void)logMegaphoneSeen;
- (void)didDismiss;
- (void)didSelectButtonOne;
- (id)newSideImage;
- (id)cacheKey;
- (id)initWithFrame:(struct CGRect)arg1 andHeader:(id)arg2 andMessage:(id)arg3 fromSource:(id)arg4;

@end
