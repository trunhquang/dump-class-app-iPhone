//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface FBLoginErrorStateManager : NSObject
{
    unsigned int _incorrectPasswordCount;
    NSError *_error;
    NSString *_correctLoginIdentifier;
    NSString *_errorURL;
}

@property(readonly, copy, nonatomic) NSString *errorURL; // @synthesize errorURL=_errorURL;
@property(readonly, copy, nonatomic) NSString *correctLoginIdentifier; // @synthesize correctLoginIdentifier=_correctLoginIdentifier;
- (void).cxx_destruct;
- (void)_getFallbackLoginErrorStrings;
- (void)clearIncorrectPasswordCount;
- (void)updateWithError:(id)arg1;

@end

