//
//  AddFoodViewController.m
//  哎呀吃什么
//
//  Created by 王振宇 on 14/12/1.
//  Copyright (c) 2014年 王振宇. All rights reserved.
//

#import "AddFoodViewController.h"

@interface AddFoodViewController ()
{
    UIActionSheet *MyActionsheet;
}

@end

@implementation AddFoodViewController

@synthesize addFoodNameLabel=_addFoodNameLabel;
@synthesize addFoodImageView=_addFoodImageView;
@synthesize oneFoodInfoDictionary=_oneFoodInfoDictionary;
@synthesize foodName=_foodName;
@synthesize data=_data;


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)addFoodButtonAction:(id)sender {
    
}

- (IBAction)cancelButtonAction:(id)sender {
    
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (IBAction)saveButtonAction:(id)sender {
}
@end
