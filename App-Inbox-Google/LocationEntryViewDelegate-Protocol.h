//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LocationEntryView, NSString;

@protocol LocationEntryViewDelegate <NSObject>
- (void)locationEntryView:(LocationEntryView *)arg1 didPickLocation:(id <JBTLocation>)arg2;
- (void)locationEntryView:(LocationEntryView *)arg1 textDidChange:(NSString *)arg2;
@end

