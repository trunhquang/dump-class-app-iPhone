//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITextView;

@interface FBGrowingTextViewHeightCalculator : NSObject
{
    UITextView *_textView;
    unsigned int _maximumNumberOfLines;
}

@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
- (void).cxx_destruct;
- (float)requiredHeight:(char *)arg1;
- (float)requiredHeight;
- (id)initWithTextView:(id)arg1;
- (id)init;

@end
