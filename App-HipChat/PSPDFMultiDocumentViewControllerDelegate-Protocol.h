//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PSPDFDocument, PSPDFMultiDocumentViewController;

@protocol PSPDFMultiDocumentViewControllerDelegate <NSObject>

@optional
- (void)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 didChangeVisibleDocument:(PSPDFDocument *)arg2;
- (BOOL)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 shouldChangeVisibleDocument:(PSPDFDocument *)arg2;
- (void)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 didChangeDocuments:(NSArray *)arg2;
- (BOOL)multiPDFController:(PSPDFMultiDocumentViewController *)arg1 shouldChangeDocuments:(NSArray *)arg2;
@end
