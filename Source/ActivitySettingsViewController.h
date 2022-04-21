//
//  ActivitySettingsViewController.h
//  hh2ServiceProUniversal
//
//  Created by Devon Dorrity on 4/11/13.
//  Copyright (c) 2013 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomViewControllerProtocol.h"
#import "SettingCell.h"

@class SettingsViewController;

@interface ActivitySettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CustomViewController, SettingCellDelegate> {
    SettingsViewController *__weak settingsVC;
    IBOutlet UITableView *tableView;
    NSMutableArray *settingItems;
    NSMutableArray *settingSections;
    NSString *title;
    
    int currentRow_;
    UITextField *currentTextField_;
}

@property (nonatomic) UITableView *tableView;
@property (nonatomic, weak) SettingsViewController *settingsVC;
@property (nonatomic) NSMutableArray *settingItems;
@property (nonatomic) NSMutableArray *settingSections;


- (void)viewWillAppear;

@end
