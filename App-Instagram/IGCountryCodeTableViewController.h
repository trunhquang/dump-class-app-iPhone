//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, NSDictionary;

@interface IGCountryCodeTableViewController : UITableViewController
{
    NSDictionary *_countryNameToCountryNumberMap;
    id <IGCountryCodeTableViewControllerDelegate> _delegate;
    NSArray *_countryDataArray;
}

@property(retain, nonatomic) NSArray *countryDataArray; // @synthesize countryDataArray=_countryDataArray;
@property(nonatomic) __weak id <IGCountryCodeTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *countryNameToCountryNumberMap; // @synthesize countryNameToCountryNumberMap=_countryNameToCountryNumberMap;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

@end

