//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBCompositionModelBundle, NSString;

@protocol FBCompositionModelBundleCache
- (void)updateBundleForCompositionID:(NSString *)arg1 bundle:(FBCompositionModelBundle *)arg2;
- (void)lookupBundleByCompositionID:(NSString *)arg1 callbackBlock:(void (^)(FBCompositionModelBundle *))arg2;
- (void)clearBundleForCompositionID:(NSString *)arg1;
- (void)clearAll;
@end

