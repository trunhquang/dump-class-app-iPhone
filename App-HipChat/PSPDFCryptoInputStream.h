//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSInputStream.h"

@interface PSPDFCryptoInputStream : NSInputStream
{
    CDUnknownBlockType _decryptionBlock;
    NSInputStream *_parentStream;
}

@property(retain, nonatomic) NSInputStream *parentStream; // @synthesize parentStream=_parentStream;
@property(copy, nonatomic) CDUnknownBlockType decryptionBlock; // @synthesize decryptionBlock=_decryptionBlock;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)close;
- (void)open;
- (id)initWithInputStream:(id)arg1 decryptionBlock:(CDUnknownBlockType)arg2;

@end

