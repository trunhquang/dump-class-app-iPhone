//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFAction.h"

@class NSString;

@interface PSPDFJavaScriptAction : PSPDFAction
{
    NSString *_script;
}

+ (id)propertyKeys;
+ (id)executeScript:(id)arg1 appliedToDocumentProvider:(id)arg2 application:(id)arg3 eventDictionary:(id)arg4 sender:(id)arg5 error:(id *)arg6;
@property(copy, nonatomic) NSString *script; // @synthesize script=_script;
- (void).cxx_destruct;
- (id)executeScriptAppliedToDocumentProvider:(id)arg1 application:(id)arg2 eventDictionary:(id)arg3 sender:(id)arg4 error:(id *)arg5;
- (id)executeScriptAppliedToDocumentProvider:(id)arg1 application:(id)arg2 eventParams:(id)arg3 sender:(id)arg4 error:(id *)arg5;
- (id)localizedDescriptionWithDocumentProvider:(id)arg1;
- (id)initWithPDFDictionary:(struct CGPDFDictionary *)arg1 documentRef:(struct CGPDFDocument *)arg2;
- (id)initWithScript:(id)arg1;
- (id)init;

@end

