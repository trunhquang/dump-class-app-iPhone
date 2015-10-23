//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFOpenGLInstanceRenderingObjects : NSObject
{
    unsigned int _textureID;
    unsigned int _processingTexture1;
    unsigned int _processingTexture2;
    unsigned long _width;
    unsigned long _height;
    int _owningQueue;
    unsigned int _presentationRenderbuffer;
    unsigned int _readTexture;
    unsigned int _writeTexture;
}

@property unsigned int writeTexture; // @synthesize writeTexture=_writeTexture;
@property unsigned int readTexture; // @synthesize readTexture=_readTexture;
@property unsigned int presentationRenderbuffer; // @synthesize presentationRenderbuffer=_presentationRenderbuffer;
@property int owningQueue; // @synthesize owningQueue=_owningQueue;
@property unsigned long height; // @synthesize height=_height;
@property unsigned long width; // @synthesize width=_width;
@property unsigned int processingTexture2; // @synthesize processingTexture2=_processingTexture2;
@property unsigned int processingTexture1; // @synthesize processingTexture1=_processingTexture1;
@property unsigned int textureID; // @synthesize textureID=_textureID;
- (id)hashValueAsObject;
- (id)initWithTextureID:(unsigned int)arg1 processingTexture1:(unsigned int)arg2 processingTexture2:(unsigned int)arg3 width:(unsigned long)arg4 height:(unsigned long)arg5;

@end

