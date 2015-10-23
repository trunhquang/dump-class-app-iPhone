//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface AFPermissionsContainer : NSObject <NSCoding>
{
    BOOL _hiResPermissions;
    BOOL _whiteLabelPermissions;
    BOOL _killSwitched;
    NSString *_nonce;
}

@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(nonatomic, getter=isKillSwitched) BOOL killSwitched; // @synthesize killSwitched=_killSwitched;
@property(nonatomic, getter=hasWhiteLabelPermissions) BOOL whiteLabelPermissions; // @synthesize whiteLabelPermissions=_whiteLabelPermissions;
@property(nonatomic, getter=hasHiResPermissions) BOOL hiResPermissions; // @synthesize hiResPermissions=_hiResPermissions;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)disabledStringForKey:(id)arg1;
- (id)enabledStringForKey:(id)arg1;
- (BOOL)validateDecodedValue:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
