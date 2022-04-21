//
//  AddPhotoDetailViewController.h
//  hh2ServiceProUniversal
//
//  Created by Bhavesh B on 7/2/14.
//  Copyright (c) 2014 Digital Business Integration. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddPhotoDetailDelegate;

@interface AddPhotoDetailViewController : UIViewController
{
    IBOutlet UITextField *_txtTitle;
    IBOutlet UITextView *_txtDesc;
    IBOutlet UIImageView *_imgView;
    IBOutlet UIToolbar *_topToolBar;
    IBOutlet UILabel *_txtViewPlaceHolder;
    NSString *_placeholder;
    UIImage *_selectedImage;
}

@property(nonatomic, strong) UIImage *selectedImage;
@property(nonatomic, weak) id delegate;

- (IBAction)didSelectedCancel:(id)sender;
- (IBAction)didSelectSave:(id)sender;

@end

@protocol AddPhotoDetailDelegate

- (void)setImageDataFromDict:(NSDictionary *) imageDataDict;

@end