//
//  AddSignatureViewController.h
//  hh2ServiceProUniversal
//
//  Created by Devon Dorrity on 4/9/12.
//  Copyright (c) 2012 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@class Trip;
@class SignatureView;
@class SignatureViewController;

@interface AddSignatureViewController : UIViewController <UIAlertViewDelegate, UITextFieldDelegate, WKNavigationDelegate> {
    Trip *_trip;
    IBOutlet SignatureView *sigView;
    UIView *sigBackground;
    BOOL isKeyboardVisible_;
    SignatureViewController *__weak _signatureVC;
    IBOutlet WKWebView *_webView;
    IBOutlet UIView *_agreementView;
    IBOutlet UITextView *_agreementText;
    IBOutlet UIView *_aView;
    IBOutlet UITextField *_signatureName;
    IBOutlet UIToolbar *_topToolBar;
    IBOutlet UILabel *_lblTitle;
    IBOutlet UIScrollView *_scrollView;
    
    __weak id _delegate;
    NSArray *_selectedActivities;
    NSMutableData *_pdfFile;
    NSManagedObjectID *_tripObjectId;
}

@property (nonatomic) Trip *trip;
@property (nonatomic) SignatureView *sigView;
@property (nonatomic) UIView *sigBackground;
@property (nonatomic, weak) SignatureViewController *signatureVC;
@property (nonatomic) WKWebView *webView;
@property (nonatomic, weak) id delegate;
@property (nonatomic) NSArray *selectedActivities;
@property (nonatomic) NSMutableData *pdfFile;

@end
