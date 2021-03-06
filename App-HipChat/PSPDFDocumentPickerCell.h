//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PSPDFDocument, UIImage;

@interface PSPDFDocumentPickerCell : UITableViewCell
{
    PSPDFDocument *_document;
    unsigned int _page;
    struct CGRect _rotatedPageRect;
}

@property(nonatomic) unsigned int page; // @synthesize page=_page;
@property(nonatomic) __weak PSPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) struct CGRect rotatedPageRect; // @synthesize rotatedPageRect=_rotatedPageRect;
- (void).cxx_destruct;
- (id)placeholderImage;
@property(retain, nonatomic) UIImage *pagePreviewImage;
- (void)setPagePreviewImage:(id)arg1 animated:(BOOL)arg2;
- (void)setDefaults;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

