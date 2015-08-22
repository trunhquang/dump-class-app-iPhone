//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBFormElement : NSObject
{
    BOOL _showDisclosureIcon;
    BOOL _isDirty;
    NSString *_text;
    Class _elementViewClass;
    int _elementID;
    id _value;
    CDUnknownBlockType _selectBlock;
    id <FBFormElementDelegate> _delegate;
}

+ (Class)defaultElementViewClass;
@property(nonatomic) __weak id <FBFormElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) BOOL isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) BOOL showDisclosureIcon; // @synthesize showDisclosureIcon=_showDisclosureIcon;
@property(readonly, nonatomic) int elementID; // @synthesize elementID=_elementID;
@property(retain, nonatomic) Class elementViewClass; // @synthesize elementViewClass=_elementViewClass;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL reloadOnUpdate;
@property(readonly, copy, nonatomic) NSString *reuseID;
- (id)initWithID:(int)arg1 value:(id)arg2;

@end

