//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSObject<FBImageSearcherDelegate>;

@interface FBImageSearcher : NSObject
{
    FBUserSession *_session;
    NSObject<FBImageSearcherDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<FBImageSearcherDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)search:(id)arg1 page:(int)arg2;
- (void)search:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

