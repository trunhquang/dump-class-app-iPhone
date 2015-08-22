//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBGraphQLServiceConfiguring <NSObject>
@property(nonatomic) unsigned int serverSideScheduler;
@property(nonatomic) BOOL enableOrdering;
@property(nonatomic) BOOL useGraphQLBatch;
@property(readonly, nonatomic) id <FBServiceConfigurationRequesting> request;
@property(readonly, nonatomic) id <FBServiceConfigurationTransporting> transport;
@property(readonly, nonatomic) id <FBServiceConfigurationSecuring> security;
@property(readonly, nonatomic) id <FBServiceConfigurationCoring> core;
@end

