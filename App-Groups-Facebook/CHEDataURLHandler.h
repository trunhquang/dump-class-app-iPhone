//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDWebServer;

@interface CHEDataURLHandler : NSObject
{
    GCDWebServer *_webServer;
}

- (void).cxx_destruct;
- (unsigned int)_randomPortNumber;
- (void)dealloc;
- (BOOL)_openBase64EncodedURLStringUsingCocoa:(id)arg1;
- (BOOL)openBase64EncodedURLString:(id)arg1;
- (BOOL)openBase64EncodedContent:(id)arg1;
- (BOOL)openBase64EncodedURL:(id)arg1;

@end

