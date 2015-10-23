//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ObjectImageDownloadProtocol.h"

@class NSMutableArray, NSString, Photo, PromotionType;

@interface Promotion : NSObject <ObjectImageDownloadProtocol>
{
    NSString *promotionId;
    NSString *title;
    NSString *startDate;
    NSString *endDate;
    NSString *shortDes;
    NSString *fullDes;
    Photo *photo;
    unsigned int viewCount;
    NSString *resId;
    NSString *resName;
    NSString *resAddress;
    NSString *resCityId;
    NSMutableArray *photos;
    PromotionType *promotionType;
    NSString *userId;
    NSString *userName;
}

@property(copy, nonatomic) NSString *userName; // @synthesize userName;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
@property(copy, nonatomic) PromotionType *promotionType; // @synthesize promotionType;
@property(copy, nonatomic) NSMutableArray *photos; // @synthesize photos;
@property(copy, nonatomic) NSString *resCityId; // @synthesize resCityId;
@property(copy, nonatomic) NSString *resAddress; // @synthesize resAddress;
@property(copy, nonatomic) NSString *resName; // @synthesize resName;
@property(copy, nonatomic) NSString *resId; // @synthesize resId;
@property(nonatomic) unsigned int viewCount; // @synthesize viewCount;
@property(retain, nonatomic) Photo *photo; // @synthesize photo;
@property(copy, nonatomic) NSString *fullDes; // @synthesize fullDes;
@property(copy, nonatomic) NSString *shortDes; // @synthesize shortDes;
@property(copy, nonatomic) NSString *endDate; // @synthesize endDate;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId;
- (void).cxx_destruct;
- (BOOL)objectImageURLIsValid;
- (void)setObjectImageURLInvalid;
- (id)getObjectImageURLForSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

