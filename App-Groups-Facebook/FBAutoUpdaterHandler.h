//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUpdateHandler.h"

@interface FBAutoUpdaterHandler : FBUpdateHandler
{
    id <FBAutoUpdaterHandlerDelegate> _installDelegate;
}

@property(nonatomic) __weak id <FBAutoUpdaterHandlerDelegate> installDelegate; // @synthesize installDelegate=_installDelegate;
- (void).cxx_destruct;
- (void)cancel;
- (void)processUpdate:(id)arg1;
- (id)deviceStateRequirementsForUpdate:(id)arg1;

@end

