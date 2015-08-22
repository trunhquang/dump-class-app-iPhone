//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBURLRequestDefining.h"

@class NSDictionary, NSString;

@protocol FBURLRequestDefiningWithHostPathParams <FBURLRequestDefining>
@property(readonly, copy, nonatomic) NSString *methodForSignature;
@property(readonly, copy, nonatomic) NSDictionary *parameters;
@property(readonly, copy, nonatomic) NSString *relativePath;
@property(readonly, copy, nonatomic) NSString *host;
- (unsigned int)compressionMethod;
- (BOOL)useMultipartForm;
@end

