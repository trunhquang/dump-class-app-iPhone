//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBWebPhotoViewStreamingConfigurator : NSObject
{
    CDUnknownBlockType _imageFlagsToStreamConfigurator;
    CDUnknownBlockType _imageFlagsToNotifyConfigurator;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType imageFlagsToNotifyConfigurator; // @synthesize imageFlagsToNotifyConfigurator=_imageFlagsToNotifyConfigurator;
@property(readonly, copy, nonatomic) CDUnknownBlockType imageFlagsToStreamConfigurator; // @synthesize imageFlagsToStreamConfigurator=_imageFlagsToStreamConfigurator;
- (void).cxx_destruct;
- (id)initWithImageFlagsToNotifyConfigurator:(CDUnknownBlockType)arg1;
- (id)initWithImageFlagsToStreamConfigurator:(CDUnknownBlockType)arg1 imageFlagsToNotifyConfigurator:(CDUnknownBlockType)arg2;

@end

