//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface FBMMessagingStoreDatabaseQueryCommand : FBValueObject <NSCopying>
{
    NSString *_dbStatementKey;
    NSArray *_parameterList;
}

@property(readonly, copy, nonatomic) NSArray *parameterList; // @synthesize parameterList=_parameterList;
@property(readonly, copy, nonatomic) NSString *dbStatementKey; // @synthesize dbStatementKey=_dbStatementKey;
- (void).cxx_destruct;
- (id)initWithDbStatementKey:(id)arg1 parameterList:(id)arg2;

@end
