//
//  AddNoteViewController.h
//  hh2ServiceProUniversal
//
//  Created by Jason Smith on 4/28/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

@class Trip;
@class Note;
@class CustomButton;
@protocol AddNoteDelegate;

@interface AddNoteViewController : UIViewController <UIPopoverPresentationControllerDelegate>{
	id <AddNoteDelegate> __unsafe_unretained delegate;
	Trip *trip;
	Note *note;
    int _noteClass;
    int _keyboardHtDiff;
    float height;

    BOOL keyboardShown;
    
	UITextField *subject;
	IBOutlet UITextView *body;
    IBOutlet CustomButton *typeButton;
    IBOutlet UISegmentedControl *noteClass;
    IBOutlet UIToolbar *_topToolBar;
    IBOutlet NSLayoutConstraint *_htConstraint;
    IBOutlet UIBarButtonItem *_btnSaveAsAttachment;
    IBOutlet UIToolbar *_bottomToolBar;
    IBOutlet UIBarButtonItem *_btnNoteType;
    IBOutlet UIBarButtonItem *_btnNoteClass;
    IBOutlet UIView *_containerView;
}

@property (nonatomic, unsafe_unretained) id delegate;
@property (nonatomic) Trip *trip;
@property (nonatomic) Note *note;
@property (nonatomic) CustomButton *typeButton;
@property (nonatomic) UISegmentedControl *noteClass;

- (IBAction)didSelectNoteClass:(id)sender;
- (IBAction)didSelectNoteType:(id)sender;
- (IBAction)didSelectSaveAsAttachment:(id)sender;

@end


@protocol AddNoteDelegate

- (void)addNoteViewController:(AddNoteViewController *)controller didFinishWithSave:(BOOL)didSave;

@end
