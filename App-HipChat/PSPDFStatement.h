//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSPDFStatement : NSObject
{
    long _useCount;
    NSString *_query;
    struct sqlite3_stmt *_statement;
}

@property struct sqlite3_stmt *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property long useCount; // @synthesize useCount=_useCount;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)close;
- (void)dealloc;
- (void)finalize;

@end

