//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLNotificationSection.h"

@class NSDictionary, NSString;

@interface CBLNotificationTemplateSection : CBLNotificationSection
{
    NSString *_templateString;
    NSDictionary *_templateData;
}

+ (id)propertyAliases;
@property(readonly, nonatomic) NSDictionary *templateData; // @synthesize templateData=_templateData;
@property(readonly, copy, nonatomic) NSString *templateString; // @synthesize templateString=_templateString;
- (void).cxx_destruct;
- (id)templateKeyEnumerator;
- (id)templateObjectForKey:(id)arg1;

@end

