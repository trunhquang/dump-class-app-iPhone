//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTLiveList_Change.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTSectionManager_SectionChange <JBTLiveList_Change, NSObject, JavaObject>
- (int)getRelativeIndexAfterChange;
- (int)getRelativeIndexBeforeChange;
- (int)getSectionIndexAfterChange;
- (int)getSectionIndexBeforeChange;
@end

