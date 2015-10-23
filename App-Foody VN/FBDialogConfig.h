//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString, NSURL;

@interface FBDialogConfig : NSObject <NSCoding>
{
    NSString *_name;
    NSURL *_URL;
    NSArray *_versions;
}

+ (id)dialogConfigWithDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *versions; // @synthesize versions=_versions;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

