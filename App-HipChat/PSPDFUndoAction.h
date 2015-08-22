//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSPDFUndoAction : NSObject
{
    id _object;
    NSString *_key;
    id _value;
    NSString *_actionName;
    unsigned int _coalescing;
    unsigned int _type;
    double _timestamp;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int coalescing; // @synthesize coalescing=_coalescing;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;

@end

