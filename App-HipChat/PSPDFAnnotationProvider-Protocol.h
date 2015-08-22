//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, PSPDFAnnotation;

@protocol PSPDFAnnotationProvider <NSObject>
- (NSArray *)annotationsForPage:(unsigned int)arg1;

@optional
@property __weak id <PSPDFAnnotationProviderChangeNotifier> providerDelegate;
- (void)didChangeAnnotation:(PSPDFAnnotation *)arg1 keyPaths:(NSArray *)arg2 options:(NSDictionary *)arg3;
- (NSDictionary *)dirtyAnnotations;
- (BOOL)shouldSaveAnnotations;
- (BOOL)saveAnnotationsWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (NSArray *)removeAnnotations:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (NSArray *)addAnnotations:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (Class)annotationViewClassForAnnotation:(PSPDFAnnotation *)arg1;
- (BOOL)hasLoadedAnnotationsForPage:(unsigned int)arg1;
@end

