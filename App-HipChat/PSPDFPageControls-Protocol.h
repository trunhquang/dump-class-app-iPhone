//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, PSPDFAction, PSPDFDocument, PSPDFDocumentActionExecutor, UIViewController;

@protocol PSPDFPageControls <NSObject>
- (void)reloadData;
- (void)presentPreviewControllerForURL:(NSURL *)arg1 title:(NSString *)arg2 options:(NSDictionary *)arg3 sender:(id)arg4 animated:(BOOL)arg5 completion:(void (^)(void))arg6;
- (UIViewController *)presentDocumentInfoViewControllerWithOptions:(NSDictionary *)arg1 sender:(id)arg2 animated:(BOOL)arg3 completion:(void (^)(void))arg4;
- (PSPDFDocumentActionExecutor *)documentActionExecutor;
- (void)searchForString:(NSString *)arg1 options:(NSDictionary *)arg2 sender:(id)arg3 animated:(BOOL)arg4;
- (BOOL)executePDFAction:(PSPDFAction *)arg1 targetRect:(struct CGRect)arg2 page:(unsigned int)arg3 animated:(BOOL)arg4 actionContainer:(id)arg5;
- (void)setViewMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (BOOL)scrollToPreviousPageAnimated:(BOOL)arg1;
- (BOOL)scrollToNextPageAnimated:(BOOL)arg1;
- (BOOL)setPage:(unsigned int)arg1 options:(NSDictionary *)arg2 animated:(BOOL)arg3;
- (BOOL)setPage:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDocument:(PSPDFDocument *)arg1;
@end
