//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SectionInfo : NSObject
{
    NSMutableArray *rows_;
    NSString *title_;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=title_;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=rows_;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;

@end

