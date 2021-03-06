//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFGalleryItem.h"

@class NSArray, NSNumber, NSURL;

@interface PSPDFGalleryVideoItem : PSPDFGalleryItem
{
    BOOL _autoplayEnabled;
    BOOL _loopEnabled;
    NSArray *_preferredVideoQualities;
    NSNumber *_startTime;
    NSNumber *_endTime;
    unsigned int _coverMode;
    NSURL *_coverImageURL;
    NSNumber *_coverPreviewCaptureTime;
    double _seekTime;
}

@property(retain, nonatomic) NSNumber *coverPreviewCaptureTime; // @synthesize coverPreviewCaptureTime=_coverPreviewCaptureTime;
@property(copy, nonatomic) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(nonatomic) unsigned int coverMode; // @synthesize coverMode=_coverMode;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSArray *preferredVideoQualities; // @synthesize preferredVideoQualities=_preferredVideoQualities;
@property(nonatomic) BOOL loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic) BOOL autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
- (void).cxx_destruct;
- (id)fallbackURL;
- (void)parseDeprecatedCoverParameter;
- (void)parseNewCoverParameter;
- (void)parsePreferredVideoQualities;
- (id)initInternallyWithDictionary:(id)arg1;
- (CDStruct_e83c9415)playableRange;
- (id)content;
- (id)initWithDictionary:(id)arg1;

@end

