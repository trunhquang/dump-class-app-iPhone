//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSPDFPageTracker : NSObject
{
    id _pageRef;
    unsigned int _pageNumber;
    unsigned int _refCount;
}

@property(nonatomic) unsigned int refCount; // @synthesize refCount=_refCount;
@property(nonatomic) unsigned int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) id pageRef; // @synthesize pageRef=_pageRef;
- (void).cxx_destruct;
- (id)description;

@end
