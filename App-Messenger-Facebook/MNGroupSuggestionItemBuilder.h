//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MNGroupSuggestionItemBuilder : NSObject
{
    unsigned int _type;
    NSString *_name;
    NSString *_title;
    NSString *_subtitle;
}

+ (id)groupSuggestionItemFromExistingGroupSuggestionItem:(id)arg1;
+ (id)groupSuggestionItem;
- (void).cxx_destruct;
- (id)withSubtitle:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)withName:(id)arg1;
- (id)withType:(unsigned int)arg1;
- (id)build;

@end

