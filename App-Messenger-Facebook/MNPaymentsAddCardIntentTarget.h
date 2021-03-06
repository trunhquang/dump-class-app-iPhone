//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class MNPaymentsCardViewCustomizationViewModel, NSString;

@interface MNPaymentsAddCardIntentTarget : FBIntentTarget
{
    int _flowMode;
    NSString *_transferId;
    MNPaymentsCardViewCustomizationViewModel *_customizationModel;
}

+ (id)addCardIntentTargetWithFlowMode:(int)arg1 withTransferId:(id)arg2 cardViewCustomizationViewModel:(id)arg3;
@property(readonly, copy, nonatomic) MNPaymentsCardViewCustomizationViewModel *customizationModel; // @synthesize customizationModel=_customizationModel;
@property(readonly, copy, nonatomic) NSString *transferId; // @synthesize transferId=_transferId;
@property(readonly, nonatomic) int flowMode; // @synthesize flowMode=_flowMode;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;

@end

