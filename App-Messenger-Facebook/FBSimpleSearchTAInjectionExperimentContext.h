//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBSimpleSearchTAInjectionExperimentContext : FBExperimentContext
{
    BOOL _inExperiment;
    BOOL _injectFindAllNamedX;
    BOOL _findAllNamedXInjectionInGetMoreResultsSection;
    unsigned int _findAllNamedXInjectionPosition;
    unsigned int _findAllNamedXNumberOfSuggestionsToExamine;
    unsigned int _findAllNamedXMinQueryLength;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL findAllNamedXInjectionInGetMoreResultsSection; // @synthesize findAllNamedXInjectionInGetMoreResultsSection=_findAllNamedXInjectionInGetMoreResultsSection;
@property(readonly, nonatomic) unsigned int findAllNamedXMinQueryLength; // @synthesize findAllNamedXMinQueryLength=_findAllNamedXMinQueryLength;
@property(readonly, nonatomic) unsigned int findAllNamedXNumberOfSuggestionsToExamine; // @synthesize findAllNamedXNumberOfSuggestionsToExamine=_findAllNamedXNumberOfSuggestionsToExamine;
@property(readonly, nonatomic) unsigned int findAllNamedXInjectionPosition; // @synthesize findAllNamedXInjectionPosition=_findAllNamedXInjectionPosition;
@property(readonly, nonatomic) BOOL injectFindAllNamedX; // @synthesize injectFindAllNamedX=_injectFindAllNamedX;
@property(readonly, nonatomic) BOOL inExperiment; // @synthesize inExperiment=_inExperiment;

@end
