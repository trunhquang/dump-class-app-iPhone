//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRegularExpression;

@interface IGAutocompleteAbstractStore : NSObject
{
    NSRegularExpression *_regex;
}

@property(retain, nonatomic) NSRegularExpression *regex; // @synthesize regex=_regex;
- (void).cxx_destruct;
- (void)didEnterBackground:(id)arg1;
- (void)archive;
- (id)regexPattern;
- (void)dealloc;
- (id)init;

@end
