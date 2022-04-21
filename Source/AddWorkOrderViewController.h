//
//  AddWorkOrderViewController.h
//  hh2ServiceProUniversal
//
//  Created by Bhavesh B on 1/22/14.
//  Copyright (c) 2014 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CustomButton;
@class WorkType, Location, Job, ServiceCenter, ServiceDepartment, Technician, Product, StandardScope, Equipment, WorkOrder, DatePickerView;

@interface AddWorkOrderViewController : UIViewController<UIPopoverPresentationControllerDelegate>
{
    IBOutlet CustomButton *_btnWorkType;
    IBOutlet CustomButton *_btnCustomerSite;
    IBOutlet CustomButton *_btnJob;
    IBOutlet CustomButton *_btnServiceCenter;
    IBOutlet CustomButton *_btnServiceDepartment;
    IBOutlet CustomButton *_btnSalesPerson;
    IBOutlet CustomButton *_btnSmallJobProduct;
    IBOutlet CustomButton *_btnRequestDate;
    IBOutlet CustomButton *_btnStandardScope;
    IBOutlet CustomButton *_btnEquipment;
    IBOutlet UIScrollView *_scrollView;
    IBOutlet UIToolbar *_toolBar;
    
    IBOutlet UITextField *_txtTotalSale;
    IBOutlet UISwitch *_billableSwitch;
    IBOutlet UITextField *_txtContactName;
    IBOutlet UITextView *_txtDescView;
    BOOL _isDepartmentSelect;
    BOOL _isEquipmentSelect;
    IBOutlet UIView *_activityView;
    
    //UIPopoverController *popoverController_;
    UIBarButtonItem *_saveBtn;
    
    WorkType *_workType;
    Location *_customerSite;
    Job *_job;
    ServiceCenter *_serviceCenter;
    ServiceDepartment *_serviceDepartment;
    Technician *_salesPerson;
    Product *_product;
    StandardScope *_scope;
    Equipment *_equipment;
    NSDate *_requestDate;
    WorkOrder *_workOrder;
    BOOL _isDateSelected;
    
    DatePickerView *_datePickerView;
        id _delegate;
}

@property(nonatomic, retain) WorkType *workType;
@property(nonatomic, retain) Location *customerSite;
@property(nonatomic, retain) Job *job;
@property(nonatomic, retain) ServiceCenter *serviceCenter;
@property(nonatomic, retain) ServiceDepartment *serviceDepartment;
@property(nonatomic, retain) Technician *salesPerson;
@property(nonatomic, retain) Product *product;
@property(nonatomic, retain) StandardScope *scope;
@property(nonatomic, retain) Equipment *equipment;
@property(nonatomic, retain) NSDate *requestDate;
@property(nonatomic, retain) id delegate;

- (IBAction)userDidSelectWorkType:(id)sender;
- (IBAction)userDidSelectCustomerSite:(id)sender;
- (IBAction)userDidSelectJob:(id)sender;
- (IBAction)userDidSelectServiceCenter:(id)sender;
- (IBAction)userDidSelectServiceDepartment:(id)sender;
- (IBAction)userDidSelectSalesPerson:(id)sender;
- (IBAction)userDidSelectSmallJobProduct:(id)sender;
- (IBAction)userDidSelectRequestDate:(id)sender;
- (IBAction)userDidSelectStandardScope:(id)sender;
- (IBAction)userDidSelectEquipment:(id)sender;
- (IBAction)userDidSelectCancel:(id)sender;
- (IBAction)userDidSelectDefault:(id)sender;

@end
