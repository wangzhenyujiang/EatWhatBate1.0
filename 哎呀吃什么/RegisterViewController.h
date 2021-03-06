//
//  RegisterViewController.h
//  哎呀吃什么
//
//  Created by 王振宇 on 14/12/1.
//  Copyright (c) 2014年 王振宇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RegisterViewController : UIViewController<NSURLConnectionDataDelegate,NSURLConnectionDelegate,UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *userNameField;

@property (weak, nonatomic) IBOutlet UITextField *userPasfield;
@property (weak, nonatomic) IBOutlet UITextField *rePasField;

- (IBAction)rigisterButtonAction:(id)sender;
- (IBAction)reallyHiddenKey:(id)sender;


- (IBAction)cancelButtonAction:(id)sender;
- (IBAction)hiddenKeyBoard:(id)sender;

@property(nonatomic,copy)NSString *userName;
@property(nonatomic,copy)NSString *userPas;
@property(nonatomic,copy)NSString *rePas;

@property(nonatomic,strong)NSMutableData *data;

@end
