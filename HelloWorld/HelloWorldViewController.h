//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Afonso on 10/11/12.
//  Copyright (c) 2012 Afonso. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;

@end
