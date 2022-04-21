//
//  AddNewCustomerViewController.h
//  hh2ServiceProUniversal
//
//  Created by Bhavesh B on 7/24/14.
//  Copyright (c) 2014 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CustomButton, UICheckbox, CompanyType, Company;

@interface AddNewCustomerViewController : UIViewController
{
    IBOutlet UIToolbar *_topToolBar;
    IBOutlet UITextField *_txtName;
    IBOutlet UITextField *_txtAddress1;
    IBOutlet UITextField *_txtAddress2;
    IBOutlet UITextField *_txtCity;
    IBOutlet UITextField *_txtState;
    IBOutlet UITextField *_txtZip;
    IBOutlet UITextField *_txtPhone;
    IBOutlet UITextField *_txtCode;
    IBOutlet CustomButton *_btnType;
    IBOutlet UICheckbox *_isAddLocation;
    IBOutlet UITextField *_txtFaxNumber;
    IBOutlet UIView *_seperator1;
    IBOutlet UIView *_seperator2;
    IBOutlet UIView *_seperator3;
    IBOutlet UIView *_seperator4;
    
    CompanyType *_companyType;
    Company *_company;
}

@property (nonatomic) CompanyType *companyType;

- (IBAction)didSelectSave:(id)sender;
- (IBAction)didSelectCancel:(id)sender;
- (IBAction)didSelectType:(id)sender;
- (IBAction)didSelectIsLocationCheckbox:(id)sender;

@end
