//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFAnnotationSetStore.h"

@class NSArray, NSString;

@interface PSPDFKeychainAnnotationSetsStore : NSObject <PSPDFAnnotationSetStore>
{
    NSArray *_annotationSets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *annotationSets; // @synthesize annotationSets=_annotationSets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

