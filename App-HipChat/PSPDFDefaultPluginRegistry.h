//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFPluginRegistry.h"

@class NSDictionary, NSString;

@interface PSPDFDefaultPluginRegistry : NSObject <PSPDFPluginRegistry>
{
    NSDictionary *_plugins;
    NSDictionary *_instances;
}

@property(copy, nonatomic) NSDictionary *instances; // @synthesize instances=_instances;
@property(copy, nonatomic) NSDictionary *plugins; // @synthesize plugins=_plugins;
- (void).cxx_destruct;
- (id)discoverPluginClasses;
- (BOOL)isValidPluginClass:(Class)arg1;
- (void)storeSingletonInstance:(id)arg1;
- (id)instanceForProtocol:(id)arg1 withOptions:(id)arg2;
- (id)instanceForPluginClass:(Class)arg1 withOptions:(id)arg2;
- (id)pluginsForProtocol:(id)arg1 filteredUsingBlock:(CDUnknownBlockType)arg2;
- (id)allPlugins;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

