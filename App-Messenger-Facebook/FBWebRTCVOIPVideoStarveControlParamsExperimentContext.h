//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBWebRTCVOIPVideoStarveControlParamsExperimentContext : FBExperimentContext
{
    _Bool _enable_starve;
    int _video_packet_loss_low;
    int _video_packet_loss_high;
    int _starve_in_window_ms;
    int _starve_out_window_ms;
    int _video_bitrate_margin_low;
    int _video_bitrate_margin_high;
    int _audio_packet_loss_low;
    int _audio_packet_loss_high;
    int _starve_in_audio_window_ms;
    int _starve_out_audio_window_ms;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int starve_out_audio_window_ms; // @synthesize starve_out_audio_window_ms=_starve_out_audio_window_ms;
@property(readonly, nonatomic) int starve_in_audio_window_ms; // @synthesize starve_in_audio_window_ms=_starve_in_audio_window_ms;
@property(readonly, nonatomic) int audio_packet_loss_high; // @synthesize audio_packet_loss_high=_audio_packet_loss_high;
@property(readonly, nonatomic) int audio_packet_loss_low; // @synthesize audio_packet_loss_low=_audio_packet_loss_low;
@property(readonly, nonatomic) int video_bitrate_margin_high; // @synthesize video_bitrate_margin_high=_video_bitrate_margin_high;
@property(readonly, nonatomic) int video_bitrate_margin_low; // @synthesize video_bitrate_margin_low=_video_bitrate_margin_low;
@property(readonly, nonatomic) int starve_out_window_ms; // @synthesize starve_out_window_ms=_starve_out_window_ms;
@property(readonly, nonatomic) int starve_in_window_ms; // @synthesize starve_in_window_ms=_starve_in_window_ms;
@property(readonly, nonatomic) int video_packet_loss_high; // @synthesize video_packet_loss_high=_video_packet_loss_high;
@property(readonly, nonatomic) int video_packet_loss_low; // @synthesize video_packet_loss_low=_video_packet_loss_low;
@property(readonly, nonatomic) _Bool enable_starve; // @synthesize enable_starve=_enable_starve;

@end

