//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNAttachmentShareTextViewModel : FBValueObject <NSCopying>
{
    NSString *_title;
    NSString *_body;
    NSString *_attribution;
}

@property(readonly, copy, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 body:(id)arg2 attribution:(id)arg3;

@end
