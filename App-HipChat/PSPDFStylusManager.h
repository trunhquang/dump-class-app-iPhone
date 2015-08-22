//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFPlugin.h"
#import "PSPDFStylusDriverDelegate.h"
#import "PSPDFStylusViewControllerDelegate.h"

@class NSHashTable, NSOrderedSet, NSString;

@interface PSPDFStylusManager : NSObject <PSPDFStylusViewControllerDelegate, PSPDFStylusDriverDelegate, PSPDFPlugin>
{
    BOOL _connected;
    Class _currentDriverClass;
    NSOrderedSet *_availableDriverClasses;
    id <PSPDFPluginRegistry> _pluginRegistry;
    id <PSPDFStylusDriver> _driver;
    NSHashTable *_delegates;
    NSHashTable *_registeredViews;
}

+ (id)pluginInfo;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(retain, nonatomic) NSHashTable *registeredViews; // @synthesize registeredViews=_registeredViews;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) id <PSPDFStylusDriver> driver; // @synthesize driver=_driver;
@property(retain, nonatomic) id <PSPDFPluginRegistry> pluginRegistry; // @synthesize pluginRegistry=_pluginRegistry;
@property(copy, nonatomic) NSOrderedSet *availableDriverClasses; // @synthesize availableDriverClasses=_availableDriverClasses;
@property(retain, nonatomic) Class currentDriverClass; // @synthesize currentDriverClass=_currentDriverClass;
- (void).cxx_destruct;
- (void)updateCurrentStylusType;
- (id)discoverDriverClasses;
- (void)stylusViewControllerDidUpdateSelectedType:(id)arg1;
- (void)stylusSuggestsToEnableGestures;
- (void)stylusSuggestsToDisableGestures;
- (void)forwardSelector:(SEL)arg1 withObject:(id)arg2;
- (void)stylusTouchCancelled:(id)arg1;
- (void)stylusTouchEnded:(id)arg1;
- (void)stylusTouchMoved:(id)arg1;
- (void)stylusTouchBegan:(id)arg1;
- (void)buttonFired:(unsigned int)arg1;
- (void)connectionStatusChanged;
- (id)allDelegates;
- (void)classificationsDidChangeForTouches:(id)arg1;
- (id)touchInfoForTouch:(id)arg1;
- (BOOL)driverAllowsClassification;
- (void)stylusViewControllerDidTapSettingsButton:(id)arg1;
- (id)settingsControllerForCurrentDriver;
- (id)settingsControllerInfoForCurrentDriver;
- (struct CGSize)embeddedSizeForSettingsController;
- (BOOL)hasSettingsControllerForDriverClass:(Class)arg1;
- (id)stylusController;
- (void)unregisterView:(id)arg1;
- (void)registerView:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stylusName;
@property(readonly, nonatomic) unsigned int connectionStatus;
- (BOOL)enableLastDriver;
@property(readonly, copy) NSString *description;
- (id)initWithPluginRegistry:(id)arg1 options:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

