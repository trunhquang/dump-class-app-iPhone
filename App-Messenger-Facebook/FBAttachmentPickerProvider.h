//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession;

@interface FBAttachmentPickerProvider : NSObject
{
    FBUserSession *_session;
    CDUnknownBlockType _pickerCreationBlock;
}

- (void).cxx_destruct;
- (id)newAttachmentPickerWithInputData:(id)arg1;
- (void)setPickerCreationBlock:(CDUnknownBlockType)arg1;
- (id)initWithSession:(id)arg1;

@end
