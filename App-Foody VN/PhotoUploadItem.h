//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIProgressView;

@interface PhotoUploadItem : NSObject
{
    unsigned int _status;
    NSString *_Id;
    unsigned int _uploadType;
    UIProgressView *_progressView;
    NSString *_name;
    NSString *_extension;
    NSString *_title;
    NSString *_path;
    NSString *_groupId;
    NSString *_resId;
    NSString *_reviewId;
    NSString *_categorySelection;
    NSString *_promotionId;
}

@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(copy, nonatomic) NSString *categorySelection; // @synthesize categorySelection=_categorySelection;
@property(copy, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(copy, nonatomic) NSString *resId; // @synthesize resId=_resId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) unsigned int uploadType; // @synthesize uploadType=_uploadType;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

