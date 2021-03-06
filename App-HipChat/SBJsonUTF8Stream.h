//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface SBJsonUTF8Stream : NSObject
{
    const char *_bytes;
    NSMutableData *_data;
    unsigned int _length;
    unsigned int _index;
}

@property unsigned int index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)stringWithRange:(struct _NSRange)arg1;
- (BOOL)skipCharacters:(const char *)arg1 length:(unsigned int)arg2;
- (BOOL)haveRemainingCharacters:(unsigned int)arg1;
- (void)skipWhitespace;
- (void)skip;
- (BOOL)getStringFragment:(id *)arg1;
- (BOOL)getNextUnichar:(unsigned short *)arg1;
- (BOOL)getUnichar:(unsigned short *)arg1;
- (void)appendData:(id)arg1;
- (id)init;

@end

