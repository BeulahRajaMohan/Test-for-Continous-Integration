//
//  ActivitiesViewController.h
//  hh2ServiceProUniversal
//
//  Created by Bhavesh B on 7/7/14.
//  Copyright (c) 2014 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Trip;
@class WorkOrder;
@class Scope;
@class Activity;

@interface ActivitiesViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>
{
    IBOutlet UITableView *_tableView;
    IBOutlet UIToolbar *_topToolBar;

    WorkOrder *workOrder_;
	Scope *scope_;
    UIBarButtonItem *scopesButton_;

    int taskCount_;
	int flatRateCount_;
    int activityCount_;
    Activity *currentActivity_;
    int currentSection_;
    BOOL isReadOnly;
    BOOL _isAdding;
    NSMutableArray *scopesArray;
    NSArray *_sortedScopes;
    
    __weak id _delegate;
    int _selectedTag;
}

@property (nonatomic) UITableView *tableView;
@property (nonatomic) WorkOrder *workOrder;
@property (nonatomic) Scope *scope;
@property (nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) Activity *currentActivity;
@property (nonatomic) NSDate *selectedDate;
@property (nonatomic, weak) id delegate;
@property (nonatomic) int selectedTag;

- (void) setWorkOrder:(WorkOrder *)workOrder activeScopeIndex:(NSInteger)index;
- (IBAction)didSelectCancel:(id)sender;
- (IBAction)didSelectDone:(id)sender;

@end
