//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxXmlTransformSource.h"

@class NSString;

@interface JavaxXmlTransformDomDOMSource : NSObject <JavaxXmlTransformSource>
{
    id <OrgW3cDomNode> node_;
    NSString *systemID_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getSystemId;
- (void)setSystemIdWithNSString:(id)arg1;
- (id)getNode;
- (void)setNodeWithOrgW3cDomNode:(id)arg1;
- (id)initWithOrgW3cDomNode:(id)arg1 withNSString:(id)arg2;
- (id)initWithOrgW3cDomNode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

