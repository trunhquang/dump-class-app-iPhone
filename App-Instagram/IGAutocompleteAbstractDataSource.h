//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGAutocompleteAbstractDataSource : NSObject
{
    BOOL _shouldReverseSort;
    int _defaultSet;
    NSString *_query;
    NSArray *_filteredStrings;
    NSArray *_filteredResults;
}

@property(retain, nonatomic) NSArray *filteredResults; // @synthesize filteredResults=_filteredResults;
@property(retain, nonatomic) NSArray *filteredStrings; // @synthesize filteredStrings=_filteredStrings;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) BOOL shouldReverseSort; // @synthesize shouldReverseSort=_shouldReverseSort;
@property(nonatomic) int defaultSet; // @synthesize defaultSet=_defaultSet;
- (void).cxx_destruct;
- (id)resultForRow:(int)arg1;
- (id)allResults;
- (unsigned int)numberOfResults;
- (int)sortedOrder:(int)arg1;

@end

