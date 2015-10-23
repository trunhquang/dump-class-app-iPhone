//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface AFPhotoEditorSession : NSObject
{
    BOOL _modified;
    BOOL _open;
    BOOL _cancelled;
    NSMutableArray *_contexts;
    NSMutableArray *_processors;
    id <AFPhotoEditorSessionDelegate> _delegate;
    struct CGSize _editingSize;
}

@property(nonatomic) __weak id <AFPhotoEditorSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *processors; // @synthesize processors=_processors;
@property(retain, nonatomic) NSMutableArray *contexts; // @synthesize contexts=_contexts;
@property(nonatomic) struct CGSize editingSize; // @synthesize editingSize=_editingSize;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
- (void).cxx_destruct;
- (void)addProcessors:(id)arg1;
- (id)createContextWithImage:(id)arg1;
- (id)createContextWithImage:(id)arg1 maxSize:(struct CGSize)arg2;
@property(readonly, nonatomic, getter=isModified) BOOL modified; // @synthesize modified=_modified;
- (id)init;
- (void)dealloc;

@end

