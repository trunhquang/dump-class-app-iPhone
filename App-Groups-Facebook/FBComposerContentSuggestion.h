//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBComposerSuggestedContent, NSString, NSURL;

@interface FBComposerContentSuggestion : FBValueObject <NSCopying, NSCoding>
{
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    FBComposerSuggestedContent *_suggestedContent;
}

@property(readonly, copy, nonatomic) FBComposerSuggestedContent *suggestedContent; // @synthesize suggestedContent=_suggestedContent;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 suggestedContent:(id)arg4;

@end

