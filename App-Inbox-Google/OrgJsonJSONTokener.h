//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OrgJsonJSONTokener : NSObject
{
    NSString *in_;
    int pos_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)dehexcharWithChar:(unsigned short)arg1;
- (void)dealloc;
- (void)back;
- (unsigned short)skipToWithChar:(unsigned short)arg1;
- (void)skipPastWithNSString:(id)arg1;
- (id)nextToWithChar:(unsigned short)arg1;
- (id)nextToWithNSString:(id)arg1;
- (id)nextWithInt:(int)arg1;
- (unsigned short)nextClean;
- (unsigned short)nextWithChar:(unsigned short)arg1;
- (unsigned short)next;
- (BOOL)more;
- (id)description;
- (id)syntaxErrorWithNSString:(id)arg1;
- (id)readArray;
- (id)readObject;
- (id)nextToInternalWithNSString:(id)arg1;
- (id)readLiteral;
- (unsigned short)readEscapeCharacter;
- (id)nextStringWithChar:(unsigned short)arg1;
- (void)skipToEndOfLine;
- (int)nextCleanInternal;
- (id)nextValue;
- (id)initWithNSString:(id)arg1;

@end

