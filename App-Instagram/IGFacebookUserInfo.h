//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString;

@interface IGFacebookUserInfo : NSObject <NSCoding>
{
    NSMutableDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL usesDefaultProfilePicture;
@property(readonly, nonatomic) BOOL isEmployee;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *userID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGraphUserDictionary:(id)arg1;

@end

