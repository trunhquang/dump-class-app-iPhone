//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFPlugin.h"

@class NSDictionary, PSPDFAnnotation;

@protocol PSPDFPageRenderer <PSPDFPlugin>
- (BOOL)drawPage:(unsigned int)arg1 inContext:(struct CGContext *)arg2 withOptions:(NSDictionary *)arg3 error:(id *)arg4;

@optional
- (BOOL)renderAppearanceStream:(PSPDFAnnotation *)arg1 inContext:(struct CGContext *)arg2 error:(id *)arg3;
@end

