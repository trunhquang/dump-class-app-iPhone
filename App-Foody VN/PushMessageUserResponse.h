//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class ImageResource, Message, NSMutableArray;

@interface PushMessageUserResponse : CloudPagingResponse
{
    NSMutableArray *messageList;
    Message *message;
    ImageResource *imageResource;
    NSMutableArray *imageResourceList;
    NSMutableArray *currentList;
}

@property(retain, nonatomic) NSMutableArray *currentList; // @synthesize currentList;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource;
@property(retain, nonatomic) Message *message; // @synthesize message;
@property(retain, nonatomic) NSMutableArray *messageList; // @synthesize messageList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)foundCDATA:(id)arg1 onPath:(id)arg2;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedMessages;
- (id)init;

@end

