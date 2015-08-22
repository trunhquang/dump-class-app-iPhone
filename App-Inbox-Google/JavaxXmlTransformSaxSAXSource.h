//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxXmlTransformSource.h"

@class NSString, OrgXmlSaxInputSource;

@interface JavaxXmlTransformSaxSAXSource : NSObject <JavaxXmlTransformSource>
{
    id <OrgXmlSaxXMLReader> reader_;
    OrgXmlSaxInputSource *inputSource_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)sourceToInputSourceWithJavaxXmlTransformSource:(id)arg1;
- (void)dealloc;
- (id)getSystemId;
- (void)setSystemIdWithNSString:(id)arg1;
- (id)getInputSource;
- (void)setInputSourceWithOrgXmlSaxInputSource:(id)arg1;
- (id)getXMLReader;
- (void)setXMLReaderWithOrgXmlSaxXMLReader:(id)arg1;
- (id)initWithOrgXmlSaxInputSource:(id)arg1;
- (id)initWithOrgXmlSaxXMLReader:(id)arg1 withOrgXmlSaxInputSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

