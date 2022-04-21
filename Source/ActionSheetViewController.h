//
//  ActionSheetVC.h
//  hh2ServicePro
//
//  Created by Devon Dorrity on 3/4/10.
//  Copyright 2010 Digital Business Integration. All rights reserved.
//

@class Trip;
@class WorkOrder;
@class Scope;
@class Activity;
@class UICheckbox;
@class UILaborRate;
@class UITime;
@class UIPart;
@class UIPartQty;
@class UIMisc;
@class UIMiscQty;
@class PartSelectorViewController;
@class FlatRate;


@interface ActionSheetViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPopoverPresentationControllerDelegate, UIActionSheetDelegate> {
	IBOutlet UITableView *_tableView;
    IBOutlet UIToolbar *_topToolBar;
    __weak IBOutlet UIBarButtonItem *_btnSetting;
    __weak IBOutlet UIBarButtonItem *_btnRefresh;
    __weak IBOutlet UIBarButtonItem *_btnLog;
    IBOutlet UILabel *_lblTitle;
    IBOutlet UIBarButtonItem *_btnHelp;
    
    WorkOrder *workOrder_;
	Scope *scope_;
    UIBarButtonItem *scopesButton_;
    UIBarButtonItem *addActivityButton_;
	int taskCount_;
	int flatRateCount_;
    int activityCount_;
	NSSortDescriptor *sort_;
    NSIndexPath *currentIndexPath_;
    CGPoint currentOffset_;
    Activity *currentActivity_;
    int currentSection_;
    BOOL isReadOnly;
    BOOL _isAdding;
    NSMutableArray *scopesArray;
    //UIActionSheet *actionSheetView;
    NSArray *_sortedScopes;
}

@property (nonatomic) UITableView *tableView;
@property (nonatomic) WorkOrder *workOrder;
@property (nonatomic) Scope *scope;
@property (nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) Activity *currentActivity;
@property (nonatomic) NSDate *selectedDate;
@property (nonatomic, strong) NSString *helpContext;

@property BOOL isReadOnly;

- (id)initWithWorkOrder:(WorkOrder *)workOrder activeScopeIndex:(NSInteger)index;
- (void) setWorkOrder:(WorkOrder *)workOrder activeScopeIndex:(NSInteger)index;

//button presses
- (void)completeCheckbox:(UICheckbox *)sender;
//- (void)deselectSegment:(UISegmentedControl *)sender;
- (void)changeLaborRate:(UILaborRate *)sender;
- (void)changeTime:(UITime *)sender;
- (void)changePart:(UIPart *)sender;
- (void)changePartQty:(UIPartQty *)sender;
- (void)changeMisc:(UIMisc *)sender;
- (void)changeMiscQty:(UIMiscQty *)sender;
- (void)selectScope:(id)sender;
- (void)refreshScope;
- (void)reloadData;
- (IBAction)showHelp:(id)sender;

@end
