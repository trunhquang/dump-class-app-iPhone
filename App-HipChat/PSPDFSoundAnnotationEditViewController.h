//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PSPDFAudioPlotViewDelegate.h"

@class CAShapeLayer, NSString, NSTimer, PSPDFAudioPlotView, PSPDFMicrophonePlotView, PSPDFSoundAnnotationView, UIButton, UILabel, UISlider;

@interface PSPDFSoundAnnotationEditViewController : UIViewController <PSPDFAudioPlotViewDelegate>
{
    BOOL _isScrubbing;
    PSPDFSoundAnnotationView *_annotationView;
    NSTimer *_playbackTimer;
    CAShapeLayer *_buttonLayer;
    PSPDFMicrophonePlotView *_microphonePlotView;
    PSPDFAudioPlotView *_plotView;
    UIButton *_recordingButton;
    UIButton *_playbackButton;
    UIButton *_doneButton;
    UILabel *_playbackTimeLabel;
    UILabel *_totalTimeLabel;
    UILabel *_statusLabel;
    UISlider *_progressSlider;
}

@property(nonatomic) BOOL isScrubbing; // @synthesize isScrubbing=_isScrubbing;
@property(retain, nonatomic) UISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playbackTimeLabel; // @synthesize playbackTimeLabel=_playbackTimeLabel;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *playbackButton; // @synthesize playbackButton=_playbackButton;
@property(retain, nonatomic) UIButton *recordingButton; // @synthesize recordingButton=_recordingButton;
@property(retain, nonatomic) PSPDFAudioPlotView *plotView; // @synthesize plotView=_plotView;
@property(retain, nonatomic) PSPDFMicrophonePlotView *microphonePlotView; // @synthesize microphonePlotView=_microphonePlotView;
@property(retain, nonatomic) CAShapeLayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(retain, nonatomic) NSTimer *playbackTimer; // @synthesize playbackTimer=_playbackTimer;
@property(nonatomic) __weak PSPDFSoundAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
- (void).cxx_destruct;
- (id)URLForAudioPlotView:(id)arg1;
- (void)endDrag:(id)arg1;
- (void)updateThumb:(id)arg1;
- (void)startDrag:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)switchToAudioPlot;
- (void)didReceiveStopAllNotification:(id)arg1;
- (void)done:(id)arg1;
- (void)updatePlaybackTime;
- (void)updateViewConfiguration;
- (void)annotationStateChanged:(id)arg1;
- (void)playPause:(id)arg1;
- (void)startOrPauseRecording:(id)arg1;
- (id)imageForControl:(int)arg1;
- (struct CGRect)boundsForControl:(int)arg1;
- (void)schedulePlaybackTimer;
- (void)dealloc;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

