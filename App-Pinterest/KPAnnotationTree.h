//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface KPAnnotationTree : NSObject
{
    NSSet *_annotations;
    CDStruct_697bd25f _tree;
}

@property(nonatomic) CDStruct_697bd25f tree; // @synthesize tree=_tree;
@property(retain, nonatomic) NSSet *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (id)annotationsInMapRect:(CDStruct_90e2a262)arg1;
- (void)dealloc;
- (id)initWithAnnotations:(id)arg1;

@end
