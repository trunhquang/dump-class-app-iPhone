//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusCommonMetric2LogSpanIdCreator : NSObject
{
    id <JavaUtilMap> namespaceMasks_;
    int maxNamespace_;
    int clearNamespaceMask_;
    int namespaceShift_;
    int nextNamespace_;
    int nextDefaultId_;
}

- (void)dealloc;
- (int)getNamespaceMaskWithNSString:(id)arg1;
- (int)createIdWithNSString:(id)arg1;
- (id)initWithInt:(int)arg1;

@end

