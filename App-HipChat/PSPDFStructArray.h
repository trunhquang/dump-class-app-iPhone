//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PSPDFStructArray : NSObject <NSSecureCoding>
{
    struct PSPDFCArray arrayData;
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) BOOL isContinuous;
- (void)removeLastItem;
- (void)addItem:(const void *)arg1;
- (id)data;
- (void *)listStart;
- (unsigned int)count;
- (void)finalize;
- (id)description;
- (void)dealloc;
- (id)initWithItemSize:(unsigned long)arg1 batchSize:(unsigned long)arg2 continuous:(BOOL)arg3;
- (id)initWithData:(id)arg1 itemSize:(unsigned long)arg2 batchSize:(unsigned long)arg3;

@end

