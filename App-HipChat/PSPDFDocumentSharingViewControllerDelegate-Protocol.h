//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFOverridable.h"

@class NSArray, NSAttributedString, NSDictionary, NSError, NSIndexSet, NSString, PSPDFDocumentSharingViewController;

@protocol PSPDFDocumentSharingViewControllerDelegate <PSPDFOverridable>
- (void)documentSharingViewController:(PSPDFDocumentSharingViewController *)arg1 didFinishWithSelectedOptions:(unsigned int)arg2 files:(NSArray *)arg3 annotationSummary:(NSAttributedString *)arg4 error:(NSError *)arg5;

@optional
- (NSString *)temporaryDirectoryForDocumentSharingViewController:(PSPDFDocumentSharingViewController *)arg1;
- (NSDictionary *)processorOptionsForDocumentSharingViewController:(PSPDFDocumentSharingViewController *)arg1;
- (NSString *)documentSharingViewController:(PSPDFDocumentSharingViewController *)arg1 subtitleForOption:(unsigned int)arg2;
- (NSString *)documentSharingViewController:(PSPDFDocumentSharingViewController *)arg1 titleForOption:(unsigned int)arg2;
- (void)documentSharingViewController:(PSPDFDocumentSharingViewController *)arg1 preparationProgress:(float)arg2;
- (BOOL)documentSharingViewController:(PSPDFDocumentSharingViewController *)arg1 shouldPrepareWithSelectedOptions:(unsigned int)arg2 selectedPages:(NSIndexSet *)arg3;
- (void)documentSharingViewControllerDidCancel:(PSPDFDocumentSharingViewController *)arg1;
@end

