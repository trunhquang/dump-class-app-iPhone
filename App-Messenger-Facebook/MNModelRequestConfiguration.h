//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface MNModelRequestConfiguration : NSObject <NSCopying>
{
    BOOL _showNetworkIndicator;
    unsigned int _networkPriority;
}

+ (id)defaultBackgroundConfiguration;
+ (id)defaultForegroundConfiguration;
@property(readonly, nonatomic) unsigned int networkPriority; // @synthesize networkPriority=_networkPriority;
@property(readonly, nonatomic) BOOL showNetworkIndicator; // @synthesize showNetworkIndicator=_showNetworkIndicator;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNetworkPriority:(unsigned int)arg1 showNetworkUseIndicator:(BOOL)arg2;

@end
