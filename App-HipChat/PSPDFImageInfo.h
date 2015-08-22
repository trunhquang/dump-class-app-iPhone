//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, PSPDFDocumentProvider;

@interface PSPDFImageInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_imageID;
    unsigned int _bitsPerComponent;
    struct CGPoint *_vertices;
    PSPDFDocumentProvider *_documentProvider;
    unsigned int _page;
    struct CGSize _pixelSize;
    struct CGAffineTransform _transform;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
@property(nonatomic) __weak PSPDFDocumentProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property(nonatomic) struct CGPoint *vertices; // @synthesize vertices=_vertices;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) unsigned int bitsPerComponent; // @synthesize bitsPerComponent=_bitsPerComponent;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(copy, nonatomic) NSString *imageID; // @synthesize imageID=_imageID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) float verticalResolution;
@property(readonly, nonatomic) float horizontalResolution;
@property(readonly, nonatomic) struct CGSize displaySize;
- (id)imageInRGBColorSpaceWithError:(id *)arg1;
- (id)imageWithError:(id *)arg1;
- (struct CGRect)boundingBox;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (BOOL)isEqualToImageInfo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithImageID:(id)arg1 pixelSize:(struct CGSize)arg2 bitsPerComponent:(unsigned int)arg3 transform:(struct CGAffineTransform)arg4 vertices:(struct CGPoint *)arg5 page:(unsigned int)arg6 documentProvider:(id)arg7;
- (id)init;

@end

