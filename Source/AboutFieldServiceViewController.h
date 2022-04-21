//
//  AboutFieldServiceViewController.h
//  hh2ServiceProUniversal
//
//  Created by Devon Dorrity on 5/14/12.
//  Copyright (c) 2012 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomViewControllerProtocol.h"
#import "SettingCell.h"

@class SettingsViewController;

@interface AboutFieldServiceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CustomViewController, SettingCellDelegate> {
    SettingsViewController *__weak settingsVC;
    IBOutlet UITableView *tableView;
    NSMutableArray *settingItems;
    NSMutableArray *settingSections;

    int currentRow_;
    UITextField *currentTextField_;
}

@property (nonatomic) UITableView *tableView;
@property (nonatomic, weak) SettingsViewController *settingsVC;
@property (nonatomic) NSMutableArray *settingItems;
@property (nonatomic) NSMutableArray *settingSections;


- (void)viewWillAppear;

@end
