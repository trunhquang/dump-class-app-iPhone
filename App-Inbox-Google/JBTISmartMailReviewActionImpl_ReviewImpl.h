//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTReviewAction_Review.h"

@class NSString;

@interface JBTISmartMailReviewActionImpl_ReviewImpl : NSObject <JBTReviewAction_Review>
{
    NSString *reviewText_;
    NSString *selectedRating_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_selectedRating_;
+ (id)__annotations_reviewText_;
+ (id)__annotations_getReviewText;
+ (id)__annotations_getRating;
- (void)dealloc;
- (id)getReviewText;
- (id)getRating;
- (id)initWithJCSReviewAction_ReviewResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

