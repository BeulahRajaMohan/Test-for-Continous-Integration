//
//  ActionSheetHeaderViewCell.h
//  hh2ServiceProUniversal
//
//  Created by Bhavesh B on 5/21/14.
//  Copyright (c) 2014 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CustomButton, Scope;

@interface ActionSheetHeaderViewCell : UITableViewCell
{
    IBOutlet UILabel *_lblLogo;
    IBOutlet UILabel *_lblTitle;
    IBOutlet UILabel *_lblEquipName;
    IBOutlet CustomButton *_btnScope;
    
    IBOutlet NSLayoutConstraint *_titleHt;
    __weak id _delegate;
    Scope *_scope;
}

@property (nonatomic, strong)UILabel *lblTitle;
@property (nonatomic, strong)UILabel *lblEquipName;
@property (nonatomic, strong)CustomButton *btnScope;
@property (nonatomic, weak) id delegate;
@property (nonatomic, strong) Scope *scope;

- (IBAction)userDidSelectScopeBtn:(id)sender;

@end
