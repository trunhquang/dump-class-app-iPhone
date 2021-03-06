//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBConsistentLookasidePersistence : NSObject
{
    struct unique_ptr<FB::DataModelInfra::Persistence, std::__1::default_delete<FB::DataModelInfra::Persistence>> _db;
    NSString *_dbPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)insertOrUpdateRecord:(id)arg1 error:(id *)arg2 bytesWritten:(unsigned int *)arg3;
- (id)selectRecordForPrimaryKey:(id)arg1 typeName:(id)arg2 error:(id *)arg3;
- (id)initWithDBPath:(id)arg1;

@end

