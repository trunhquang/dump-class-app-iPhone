//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class GOODialogContainerScrollView, GOODialogView;

@interface GOOActionSheetDialogViewController : UIViewController
{
    GOODialogView *_actionSheetView;
    GOODialogContainerScrollView *_scrollView;
}

@property(retain, nonatomic) GOODialogContainerScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GOODialogView *actionSheetView; // @synthesize actionSheetView=_actionSheetView;
- (void).cxx_destruct;
- (id)navigationPrimaryScrollView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

