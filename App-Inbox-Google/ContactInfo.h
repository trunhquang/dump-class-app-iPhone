//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ContactInfo : NSObject
{
    NSString *_email;
    NSString *_name;
    NSString *_profilePhotoURL;
}

+ (id)contactInfoWithName:(id)arg1 email:(id)arg2 photoURL:(id)arg3;
@property(readonly, copy, nonatomic) NSString *profilePhotoURL; // @synthesize profilePhotoURL=_profilePhotoURL;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) NSString *sortKey;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 email:(id)arg2 photoURL:(id)arg3;

@end

