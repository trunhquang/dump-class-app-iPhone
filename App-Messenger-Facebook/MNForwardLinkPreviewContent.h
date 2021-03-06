//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNForwardPreviewContentBase.h"

@class NSString, NSURL;

@interface MNForwardLinkPreviewContent : MNForwardPreviewContentBase
{
    NSString *_title;
    NSString *_caption;
    NSString *_descriptionText;
    NSURL *_photoURL;
}

@property(readonly, copy, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)arg1 caption:(id)arg2 descriptionText:(id)arg3 photoURL:(id)arg4;

@end

