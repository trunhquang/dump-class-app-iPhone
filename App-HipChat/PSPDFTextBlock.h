//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface PSPDFTextBlock : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_words;
    NSArray *_glyphs;
    struct CGRect _frame;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *glyphs; // @synthesize glyphs=_glyphs;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *words; // @synthesize words=_words;
@property(readonly, copy, nonatomic) NSString *content;
- (void)setGlyphs:(id)arg1;
- (BOOL)isEqualToTextBlock:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithGlyphs:(id)arg1;
- (id)init;

@end

