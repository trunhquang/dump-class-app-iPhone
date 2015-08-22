//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData, NSString, NSURL;

@interface PSPDFAESDecryptor : NSObject
{
    struct __sFILE *_fin;
    long _blockCount;
    int _lastBlockRead;
    struct _CCCryptor *_cryptor;
    char _currentIV[16];
    CDStruct_43cfb2c2 _HMACContext;
    long long _offsetEncryptedDataStarts;
    long _onDiskFileSize;
    long long _encryptedDataSize;
    NSMutableData *_HMACData;
    NSMutableData *_storedHMACData;
    unsigned char _options;
    BOOL _hasV1HMAC;
    BOOL _hasV2Password;
    BOOL _isLegacyFileFormat;
    long _decryptedFileSize;
    NSString *_password;
    NSData *_encryptionKey;
    NSData *_HMACKey;
    NSURL *_URL;
    unsigned int _rounds;
    unsigned int _PRF;
    NSString *_salt;
    unsigned int _roundsFromLegacyAPI;
}

@property(nonatomic) unsigned int roundsFromLegacyAPI; // @synthesize roundsFromLegacyAPI=_roundsFromLegacyAPI;
@property(copy, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(nonatomic) unsigned int PRF; // @synthesize PRF=_PRF;
@property(nonatomic) BOOL isLegacyFileFormat; // @synthesize isLegacyFileFormat=_isLegacyFileFormat;
@property(nonatomic) unsigned int rounds; // @synthesize rounds=_rounds;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSData *HMACKey; // @synthesize HMACKey=_HMACKey;
@property(retain, nonatomic) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) BOOL hasV2Password; // @synthesize hasV2Password=_hasV2Password;
@property(nonatomic) BOOL hasV1HMAC; // @synthesize hasV1HMAC=_hasV1HMAC;
@property(nonatomic) unsigned char options; // @synthesize options=_options;
@property(nonatomic) long decryptedFileSize; // @synthesize decryptedFileSize=_decryptedFileSize;
- (void).cxx_destruct;
- (id)HMACdata;
- (BOOL)decryptBlock:(long)arg1 buffer:(void *)arg2;
- (long)offsetForBlock:(long)arg1;
- (long)offsetForIVForBlock:(long)arg1;
- (BOOL)updateOptionsForPreamble:(id)arg1;
- (id)keyForPassword:(id)arg1 salt:(id)arg2 PRF:(unsigned int)arg3 rounds:(unsigned int)arg4;
@property(readonly, nonatomic) BOOL isCorrectHMAÐ¡;
- (unsigned long)bytesAtOffset:(long long)arg1 length:(unsigned long)arg2 buffer:(void *)arg3;
- (void)dealloc;
- (BOOL)paddingLength;
- (BOOL)configureWithLegacyFormatWithError:(id *)arg1;
- (BOOL)configureWithRNCryptorFormatWithError:(id *)arg1;
- (BOOL)initCommonWithError:(id *)arg1;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 salt:(id)arg3 rounds:(unsigned int)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 key:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 PRF:(unsigned int)arg3 rounds:(unsigned int)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 passphrase:(id)arg2 error:(id *)arg3;

@end

