//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CitySectionHeaderView, NSArray, Property;

@interface CitySection : NSObject
{
    BOOL open;
    CitySectionHeaderView *sectionHeaderView;
    NSArray *sectionChildren;
    Property *sectionMenuGroup;
}

@property(retain, nonatomic) Property *sectionMenuGroup; // @synthesize sectionMenuGroup;
@property(retain, nonatomic) NSArray *sectionChildren; // @synthesize sectionChildren;
@property(nonatomic) BOOL open; // @synthesize open;
@property(retain, nonatomic) CitySectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView;
- (void).cxx_destruct;

@end

