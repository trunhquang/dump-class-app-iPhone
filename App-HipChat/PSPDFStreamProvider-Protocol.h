//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, PSPDFDocumentProvider;

@protocol PSPDFStreamProvider <NSObject>
@property(readonly, copy, nonatomic) NSString *streamPath;
@property(readonly, nonatomic) __weak PSPDFDocumentProvider *documentProvider;
- (NSURL *)fileURLWithError:(id *)arg1;
@end

