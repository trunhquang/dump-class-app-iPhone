//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (RelativeDate)
- (id)formattedDateRelativeToNow;
- (id)shortenedFormattedDateRelativeToNow;
- (id)formattedDateRelativeToNowShortened:(BOOL)arg1;
- (id)stringForTimePeriod:(int)arg1 delta:(int)arg2 shortened:(BOOL)arg3;
- (id)fullStringForTimePeriod:(int)arg1 delta:(int)arg2;
- (id)shortenedStringForTimePeriod:(int)arg1 delta:(int)arg2;
@end
