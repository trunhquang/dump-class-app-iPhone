//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNAttachmentStyleMapProvider.h"

@class NSDictionary, NSString;

@interface MNAttachmentStyleMapProviderImpl : NSObject <MNAttachmentStyleMapProvider, FBSessionClassProvidable>
{
    NSDictionary *_viewModelCreatorMap;
    NSDictionary *_viewFactoryMap;
    NSDictionary *_snippetCreatorMap;
}

- (void).cxx_destruct;
- (id)attachmentSnippetCreatorMap;
- (id)attachmentViewFactoryMap;
- (id)attachmentViewModelCreatorMap;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithViewModelCreatorMap:(id)arg1 viewFactoryMap:(id)arg2 snippetCreatorMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

