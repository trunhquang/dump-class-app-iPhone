//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MessageParserMatchable.h"

@class EmoticonList, NSString;

@interface EmoticonAutoCompleteMatcher : NSObject <MessageParserMatchable>
{
    NSString *_messageContent;
    EmoticonList *_emoticonList;
}

@property(nonatomic) __weak EmoticonList *emoticonList; // @synthesize emoticonList=_emoticonList;
@property(copy, nonatomic) NSString *messageContent; // @synthesize messageContent=_messageContent;
- (void).cxx_destruct;
- (id)matches;
- (BOOL)containsMatches;
- (id)initWithEmoticonList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

