//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTImageUrlSettings_CropTypeEnum, NSString;

@protocol JBTImageUrlSettings_Builder <NSObject, JavaObject>
- (id <JBTImageUrlSettings>)build;
- (id <JBTImageUrlSettings_Builder>)setDefaultProtocolWithNSString:(NSString *)arg1;
- (id <JBTImageUrlSettings_Builder>)setCropTypeWithJBTImageUrlSettings_CropTypeEnum:(JBTImageUrlSettings_CropTypeEnum *)arg1;
- (id <JBTImageUrlSettings_Builder>)setCropWithBoolean:(BOOL)arg1;
- (id <JBTImageUrlSettings_Builder>)setHeightWithInt:(int)arg1;
- (id <JBTImageUrlSettings_Builder>)setWidthWithInt:(int)arg1;
@end

