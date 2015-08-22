//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSDictionary, NSSet, NSString;

@interface IASKSettingsReader : NSObject
{
    NSBundle *_applicationBundle;
    NSBundle *_settingsBundle;
    NSDictionary *_settingsDictionary;
    NSString *_localizationTable;
    NSArray *_dataSource;
    NSSet *_hiddenKeys;
}

@property(retain, nonatomic) NSSet *hiddenKeys; // @synthesize hiddenKeys=_hiddenKeys;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *localizationTable; // @synthesize localizationTable=_localizationTable;
@property(readonly, nonatomic) NSDictionary *settingsDictionary; // @synthesize settingsDictionary=_settingsDictionary;
@property(readonly, nonatomic) NSBundle *settingsBundle; // @synthesize settingsBundle=_settingsBundle;
@property(readonly, nonatomic) NSBundle *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
- (void).cxx_destruct;
- (id)locateSettingsFile:(id)arg1;
- (id)file:(id)arg1 withBundle:(id)arg2 suffix:(id)arg3 extension:(id)arg4;
- (id)platformSuffixForInterfaceIdiom:(int)arg1;
- (id)pathForImageNamed:(id)arg1;
- (id)titleForStringId:(id)arg1;
- (id)footerTextForSection:(int)arg1;
- (id)keyForSection:(int)arg1;
- (id)titleForSection:(int)arg1;
- (id)specifierForKey:(id)arg1;
- (id)indexPathForKey:(id)arg1;
- (id)specifierForIndexPath:(id)arg1;
- (int)numberOfRowsForSection:(int)arg1;
- (int)numberOfSections;
- (BOOL)_sectionHasHeading:(int)arg1;
- (void)_reinterpretBundle:(id)arg1;
- (id)init;
- (id)initWithFile:(id)arg1;
- (id)initWithSettingsFileNamed:(id)arg1 applicationBundle:(id)arg2;

@end

