//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBEncoderConfig;

@interface FBX264EncoderWrapperConfig : NSObject
{
    unsigned int _bitrate;
    FBEncoderConfig *_encoderConfig;
    float _frameRate;
    int _orientation;
    struct CGSize _inputDimension;
    struct CGSize _outputDimension;
}

@property(readonly, nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) FBEncoderConfig *encoderConfig; // @synthesize encoderConfig=_encoderConfig;
@property(readonly, nonatomic) unsigned int bitrate; // @synthesize bitrate=_bitrate;
@property(readonly, nonatomic) struct CGSize outputDimension; // @synthesize outputDimension=_outputDimension;
@property(readonly, nonatomic) struct CGSize inputDimension; // @synthesize inputDimension=_inputDimension;
- (void).cxx_destruct;
- (id)initWithOutputDimension:(struct CGSize)arg1 inputDimension:(struct CGSize)arg2 encoderConfig:(id)arg3 frameRate:(float)arg4 biterate:(unsigned int)arg5 orientation:(int)arg6;

@end

