//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class HKQuantitySeriesDataProvider, UITableView;

@interface HKQuantitySeriesViewController : UIViewController
{
    HKQuantitySeriesDataProvider *_dataProvider;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
// - (void).cxx_destruct;
- (void)loadView;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;

@end
