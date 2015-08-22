//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UIButton;

@interface ClusterFilterCell : UITableViewCell
{
    UIButton *deleteButton_;
    NSMutableArray *predicateLabels_;
    id <JBTClusterFilter> filter_;
    id <ClusterFilterCellDelegate> _delegate;
}

+ (void)initialize;
+ (float)heightOfCellWithFilter:(id)arg1;
@property(nonatomic) __weak id <ClusterFilterCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <JBTClusterFilter> filter; // @synthesize filter=filter_;
- (void).cxx_destruct;
- (void)removePredicateLabels;
- (id)createLabelForPredicate:(id)arg1;
- (void)addPredicateLabels;
- (void)deleteButtonTapped:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

