//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFSinglePageViewControllerDelegate.h"

@class NSHashTable, NSMutableSet, NSString, UIViewController<PSPDFTransitionHelperDelegate>;

@interface PSPDFTransitionHelper : NSObject <PSPDFSinglePageViewControllerDelegate>
{
    NSMutableSet *_recycledPageViews;
    UIViewController<PSPDFTransitionHelperDelegate> *_delegate;
    unsigned int _page;
    NSHashTable *_singlePages;
}

@property(retain, nonatomic) NSHashTable *singlePages; // @synthesize singlePages=_singlePages;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
@property(nonatomic) __weak UIViewController<PSPDFTransitionHelperDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)singlePageViewControllerReadyForReuse:(id)arg1;
- (void)setPage:(unsigned int)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (id)pageViewForPage:(unsigned int)arg1;
- (id)visiblePages;
- (void)setPageInternal:(unsigned int)arg1;
- (id)viewControllerAfterViewController:(id)arg1;
- (id)viewControllerBeforeViewController:(id)arg1;
- (unsigned int)fixPageNumberForDoublePageMode:(unsigned int)arg1 forceDoublePageMode:(BOOL)arg2;
- (id)singlePageControllerForPage:(unsigned int)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (Class)classForClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

