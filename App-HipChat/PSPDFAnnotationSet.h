//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFModel.h"

#import "NSFastEnumeration.h"

@class NSArray;

@interface PSPDFAnnotationSet : PSPDFModel <NSFastEnumeration>
{
    NSArray *_annotations;
}

+ (id)propertyKeys;
+ (id)unarchiveFromClipboard;
@property(copy, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)copyToClipboard;
- (void)drawInContext:(struct CGContext *)arg1 withOptions:(id)arg2;
@property(nonatomic) struct CGRect boundingBox;
- (id)description;
- (id)initWithAnnotations:(id)arg1;

@end

