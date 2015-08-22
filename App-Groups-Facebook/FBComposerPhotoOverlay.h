//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBComposerPhotoOverlayAttachment;

@interface FBComposerPhotoOverlay : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isFlipped;
    FBComposerPhotoOverlayAttachment *_attachment;
    float _rotationValue;
    float _rotationValueFromPhoto;
    float _xCoordinatePosition;
    float _yCoordinatePosition;
    float _width;
    float _height;
}

@property(readonly, nonatomic) BOOL isFlipped; // @synthesize isFlipped=_isFlipped;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, nonatomic) float yCoordinatePosition; // @synthesize yCoordinatePosition=_yCoordinatePosition;
@property(readonly, nonatomic) float xCoordinatePosition; // @synthesize xCoordinatePosition=_xCoordinatePosition;
@property(readonly, nonatomic) float rotationValueFromPhoto; // @synthesize rotationValueFromPhoto=_rotationValueFromPhoto;
@property(readonly, nonatomic) float rotationValue; // @synthesize rotationValue=_rotationValue;
@property(readonly, copy, nonatomic) FBComposerPhotoOverlayAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1 rotationValue:(float)arg2 rotationValueFromPhoto:(float)arg3 xCoordinatePosition:(float)arg4 yCoordinatePosition:(float)arg5 width:(float)arg6 height:(float)arg7 isFlipped:(BOOL)arg8;

@end

