//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNContactImportProgressMegaphoneUpdate : NSObject <NSCopying>
{
    BOOL _isActionEnabled;
    BOOL _isIconVisible;
    BOOL _isProgressEnabled;
    NSString *_callToActionContext;
    NSString *_context;
    NSString *_iconImageName;
    float _progress;
}

@property(readonly, nonatomic) BOOL isProgressEnabled; // @synthesize isProgressEnabled=_isProgressEnabled;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(readonly, nonatomic) BOOL isIconVisible; // @synthesize isIconVisible=_isIconVisible;
@property(readonly, nonatomic) BOOL isActionEnabled; // @synthesize isActionEnabled=_isActionEnabled;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *callToActionContext; // @synthesize callToActionContext=_callToActionContext;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProgress:(float)arg1 context:(id)arg2 callToActionContext:(id)arg3 iconImageName:(id)arg4 isActionEnabled:(BOOL)arg5 isIconVisible:(BOOL)arg6 isProgressEnabled:(BOOL)arg7;

@end

