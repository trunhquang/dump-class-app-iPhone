//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTFactBoxLayout.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplSearchOneboxFactBoxLayoutImpl : NSObject <JBTFactBoxLayout>
{
    id <JavaUtilList> title_;
    id <JavaUtilList> subtitle_;
    id <JavaUtilList> sections_;
    id <JavaUtilList> subFacts_;
    id <JavaUtilList> actions_;
    int colorSample_;
    int secondaryColorSample_;
    id <JBTImage> image_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_image_;
+ (id)__annotations_initWithJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_withJavaUtilList_withJBTImage_withJavaLangInteger_withJavaLangInteger__params;
+ (id)getImageWithJBTISmartMailSmartMailComponentContextImpl:(id)arg1 withJCSImage:(id)arg2;
+ (id)createFactBoxLayoutWithComGoogleAppsBigtopServicesSearchFactBox:(id)arg1 withComGoogleAppsBigtopSyncClientImplSearchOneboxOneBoxFactory:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (void)dealloc;
- (int)getSecondaryColorSample;
- (int)getColorSample;
- (id)getActions;
- (id)getType;
- (id)getSubFacts;
- (id)getSections;
- (id)getSubtitle;
- (BOOL)hasSubtitle;
- (id)getTitle;
- (BOOL)hasHeaderImage;
- (id)getHeaderImage;
- (id)initWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilList:(id)arg4 withJavaUtilList:(id)arg5 withJBTImage:(id)arg6 withJavaLangInteger:(id)arg7 withJavaLangInteger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

