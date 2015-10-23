//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QRMatrix;

@interface QREncoder : NSObject
{
    NSString *_str;
    int _correctionLevel;
    int _size;
    int _pattern;
    QRMatrix *_matrix;
}

+ (id)encode:(id)arg1 size:(int)arg2 correctionLevel:(int)arg3;
+ (id)encode:(id)arg1;
+ (id)imageForMatrix:(id)arg1;
- (int)lostPoint;
- (void)encode;
- (void)mapData:(int *)arg1 size:(int)arg2;
- (BOOL)maskForRow:(int)arg1 col:(int)arg2;
- (int *)computeBytes:(id)arg1 size:(int *)arg2;
- (id)errorCorrectPolynomial:(int)arg1;
- (id)getData;
- (id)getRSBlocks;
- (int *)getRSBlockTable;
- (void)setupTypeNumber;
- (void)setupTypeInfo;
- (int)correctionLevelNum;
- (int)getBchTypeNumber:(int)arg1;
- (int)getBchTypeInfo:(int)arg1;
- (int)getBchDigit:(int)arg1;
- (void)setupTimingPattern;
- (void)setupPositionAdjustPattern;
- (void)setupPositionProbePatternAtRow:(int)arg1 column:(int)arg2;
- (void)dealloc;
- (id)initWithStr:(id)arg1 size:(int)arg2 correctionLevel:(int)arg3 pattern:(int)arg4;

@end

