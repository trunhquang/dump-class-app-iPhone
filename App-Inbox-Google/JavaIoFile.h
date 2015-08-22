//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"

@class NSString;

@interface JavaIoFile : NSObject <JavaIoSerializable, JavaLangComparable>
{
    NSString *path_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toURL;
+ (void)initialize;
+ (BOOL)isCaseSensitiveImpl;
+ (id)createTempFileWithNSString:(id)arg1 withNSString:(id)arg2 withJavaIoFile:(id)arg3;
+ (id)createTempFileWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)listImplWithNSString:(id)arg1;
+ (BOOL)setLastModifiedImplWithNSString:(id)arg1 withLong:(long long)arg2;
+ (id)listRoots;
+ (void)checkURIWithJavaNetURI:(id)arg1;
+ (id)joinWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)fixSlashesWithNSString:(id)arg1;
- (void)dealloc;
- (long long)getFreeSpace;
- (long long)getUsableSpace;
- (long long)getTotalSpace;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)getAbsoluteName;
- (id)toURL;
- (id)toURI;
@property(readonly, copy) NSString *description;
- (BOOL)renameToWithJavaIoFile:(id)arg1;
- (BOOL)createNewFile;
- (BOOL)mkdirsWithBoolean:(BOOL)arg1;
- (BOOL)mkdirs;
- (BOOL)mkdirImplWithNSString:(id)arg1;
- (BOOL)mkdir;
- (id)filenamesToFilesWithNSStringArray:(id)arg1;
- (id)listFilesWithJavaIoFileFilter:(id)arg1;
- (id)listFilesWithJavaIoFilenameFilter:(id)arg1;
- (id)listFiles;
- (id)listWithJavaIoFilenameFilter:(id)arg1;
- (id)list;
- (long long)length;
- (BOOL)doChmodWithInt:(int)arg1 withBoolean:(BOOL)arg2;
- (BOOL)setWritableWithBoolean:(BOOL)arg1;
- (BOOL)setWritableWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2;
- (BOOL)setReadableWithBoolean:(BOOL)arg1;
- (BOOL)setReadableWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2;
- (BOOL)setExecutableWithBoolean:(BOOL)arg1;
- (BOOL)setExecutableWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2;
- (BOOL)setReadOnly;
- (BOOL)setLastModifiedWithLong:(long long)arg1;
- (long long)lastModified;
- (BOOL)isHidden;
- (BOOL)isFile;
- (BOOL)isDirectory;
- (BOOL)isAbsolute;
@property(readonly) unsigned int hash;
- (id)getPath;
- (id)getParentFile;
- (id)getParent;
- (id)getName;
- (id)getCanonicalFile;
- (id)getCanonicalPath;
- (id)getAbsoluteFile;
- (id)getAbsolutePath;
- (BOOL)exists;
- (BOOL)isEqual:(id)arg1;
- (void)deleteOnExit;
- (BOOL)delete__;
- (int)compareToWithId:(id)arg1;
- (BOOL)doAccessWithInt:(int)arg1;
- (BOOL)canWrite;
- (BOOL)canRead;
- (BOOL)canExecute;
- (id)initWithJavaNetURI:(id)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaIoFile:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

