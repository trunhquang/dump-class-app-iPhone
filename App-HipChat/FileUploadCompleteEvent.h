//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatEvent.h"

@class FileUploadOperation, NSString;

@interface FileUploadCompleteEvent : HipChatEvent
{
    NSString *_rawResponse;
    NSString *_bareJID;
    FileUploadOperation *_uploadOperation;
}

@property(readonly, nonatomic) FileUploadOperation *uploadOperation; // @synthesize uploadOperation=_uploadOperation;
@property(readonly, copy, nonatomic) NSString *bareJID; // @synthesize bareJID=_bareJID;
@property(readonly, copy, nonatomic) NSString *rawResponse; // @synthesize rawResponse=_rawResponse;
- (void).cxx_destruct;
- (id)initWithBareJID:(id)arg1 uploadOperation:(id)arg2 rawResponse:(id)arg3;

@end

