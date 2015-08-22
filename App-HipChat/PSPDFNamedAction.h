//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAction.h"

@class NSString;

@interface PSPDFNamedAction : PSPDFAction
{
    unsigned int _namedActionType;
    NSString *_namedAction;
}

+ (id)namedActionTypeJSONTransformer;
+ (id)propertyKeys;
+ (void)load;
@property(copy, nonatomic) NSString *namedAction; // @synthesize namedAction=_namedAction;
@property(nonatomic) unsigned int namedActionType; // @synthesize namedActionType=_namedActionType;
- (void).cxx_destruct;
- (unsigned int)pageIndexWithCurrentPage:(unsigned int)arg1 fromDocument:(id)arg2;
- (id)localizedDescriptionWithDocumentProvider:(id)arg1;
- (id)initWithPDFDictionary:(struct CGPDFDictionary *)arg1 documentRef:(struct CGPDFDocument *)arg2;
- (id)initWithActionNamedString:(id)arg1;
- (id)init;

@end

