//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSString, SSTextView, UIView;

@interface TextInputViewController : BaseViewController
{
    BOOL isForceOrientationToLandscape;
    BOOL _checkEmpty;
    NSString *placeHolder;
    NSString *presetText;
    id <TextInputDelegate> delegate;
    UIView *container;
    SSTextView *inputField;
}

@property(nonatomic) BOOL checkEmpty; // @synthesize checkEmpty=_checkEmpty;
@property(nonatomic) BOOL isForceOrientationToLandscape; // @synthesize isForceOrientationToLandscape;
@property(retain, nonatomic) SSTextView *inputField; // @synthesize inputField;
@property(retain, nonatomic) UIView *container; // @synthesize container;
@property(nonatomic) __weak id <TextInputDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *presetText; // @synthesize presetText;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didTouchCancelButton:(id)arg1;
- (void)didTouchDoneButton:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

