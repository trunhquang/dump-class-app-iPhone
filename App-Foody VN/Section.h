//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, Property, SectionHeaderView;

@interface Section : NSObject
{
    BOOL open;
    Property *sectionProp;
    NSArray *sectionChildren;
    SectionHeaderView *sectionHeaderView;
}

@property(retain, nonatomic) SectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView;
@property(nonatomic) BOOL open; // @synthesize open;
@property(retain, nonatomic) NSArray *sectionChildren; // @synthesize sectionChildren;
@property(retain, nonatomic) Property *sectionProp; // @synthesize sectionProp;
- (void).cxx_destruct;

@end

