//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FVMIMEHelper : NSObject
{
}

+ (id)sharedInstance;
- (id)convertableOtherMimeTypes;
- (id)nativelySupportedMimeTypes;
- (id)iWorkMimeTypes;
- (id)supportedMimetypesWithNormalizedPathExtensions;
- (id)supportedMimetypes;
- (int)convertableTypeForMimeType:(id)arg1;
- (id)mimeTypeForExtension:(id)arg1;
- (id)convertableKeyForMimeType:(id)arg1 extension:(id)arg2;
- (id)convertableKeyForAttributesAndValues:(id)arg1 key:(id)arg2;
- (id)convertableKeyForExtension:(id)arg1;
- (id)convertableKeyForMimeType:(id)arg1;
- (int)dtMimeTypeForMimeType:(id)arg1;
- (int)convertableTypeForKey:(id)arg1;
- (id)utiForFileAtPath:(id)arg1;
- (id)mimeTypeForFileAtPath:(id)arg1 forceNative:(BOOL)arg2;
- (id)mimeTypeForData:(id)arg1 filename:(id)arg2 forceNative:(BOOL)arg3;
- (id)_mimeTypeForFilename:(id)arg1 magicMimeString:(id)arg2 forceNative:(BOOL)arg3;
- (id)_mimeTypeForData:(id)arg1 filename:(id)arg2 usingIworkFallback:(BOOL)arg3;
- (id)mimeTypeForFileAtPath:(id)arg1 usingIworkFallback:(BOOL)arg2;
- (id)mimeTypeForData:(id)arg1 filename:(id)arg2 usingIworkFallback:(BOOL)arg3;
- (id)mimeTypeForData:(id)arg1 filename:(id)arg2;
- (id)mimeTypeForFileAtPath:(id)arg1;

@end

