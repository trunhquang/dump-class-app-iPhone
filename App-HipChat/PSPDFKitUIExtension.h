//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSPDFScreenController, PSPDFSpeechController;

@interface PSPDFKitUIExtension : NSObject
{
    PSPDFSpeechController *_speechController;
    PSPDFScreenController *_screenController;
    id <PSPDFApplication> _application;
}

@property(retain, nonatomic) id <PSPDFApplication> application; // @synthesize application=_application;
@property(retain, nonatomic) PSPDFScreenController *screenController; // @synthesize screenController=_screenController;
@property(retain, nonatomic) PSPDFSpeechController *speechController; // @synthesize speechController=_speechController;
- (void).cxx_destruct;
- (BOOL)isSpeechControllerLoaded;

@end
