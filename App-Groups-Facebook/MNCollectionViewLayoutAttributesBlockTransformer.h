//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNCollectionViewLayoutAttributesTransforming.h"

@class NSString;

@interface MNCollectionViewLayoutAttributesBlockTransformer : NSObject <MNCollectionViewLayoutAttributesTransforming>
{
    CDUnknownBlockType _block;
}

+ (id)transformerWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)apply:(id)arg1 inContext:(struct MNCollectionViewLayoutAttributesTransformContext)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

