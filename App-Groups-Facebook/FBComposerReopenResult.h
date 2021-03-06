//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface FBComposerReopenResult : FBValueObject <NSCopying>
{
    NSString *_statusText;
    NSArray *_attachments;
}

@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (id)initWithStatusText:(id)arg1 attachments:(id)arg2;

@end

