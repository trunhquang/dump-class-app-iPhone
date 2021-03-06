//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiTypeObjectLoader.h"
#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonIndexIndexProto_CustomValue, ComGoogleCumulusSyncClientObjectUpdate, JavaLangInteger, JavaUtilLinkedHashMap, NSString;

@protocol ComGoogleCumulusSyncClientObjectStore <ComGoogleCumulusApiTypeObjectLoader, NSObject, JavaObject>
- (void)ensureIndexUpdatedWithJavaLangRunnable:(id <JavaLangRunnable>)arg1;
- (void)wipeStore;
- (void)setLocalStoreDataVersionWithInt:(int)arg1;
- (JavaLangInteger *)getLocalStoreDataVersion;
- (void)putSettingWithNSString:(NSString *)arg1 withComGoogleCumulusCommonIndexIndexProto_CustomValue:(ComGoogleCumulusCommonIndexIndexProto_CustomValue *)arg2;
- (void)getSettingWithNSString:(NSString *)arg1 withJCGCuCallback:(id <JCGCuCallback>)arg2;
- (BOOL)hasWritePressure;
- (id <ComGoogleCumulusCommonUtilEventDispatcher>)getWritePressureDispatcher;
- (void)deleteObjectWithNSString:(NSString *)arg1;
- (void)setPendingBatchStateWithJavaUtilLinkedHashMap:(JavaUtilLinkedHashMap *)arg1;
- (void)writeUpdateWithNSString:(NSString *)arg1 withComGoogleCumulusSyncClientObjectUpdate:(ComGoogleCumulusSyncClientObjectUpdate *)arg2;
- (void)closeWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (void)commitWithJCGCuCallback:(id <JCGCuCallback>)arg1;
- (BOOL)isOpen;
- (void)initialize__WithJCGCuCallback:(id <JCGCuCallback>)arg1;
@end

