//
//  userFigTableViewController.h
//  哎呀吃什么
//
//  Created by 王振宇 on 14/12/4.
//  Copyright (c) 2014年 王振宇. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface userFigTableViewController : UITableViewController
@property (weak, nonatomic) IBOutlet UISwitch *selfLoginSwitch;
- (IBAction)selfLoginSwitchAction:(id)sender;
- (IBAction)clearAllInfoButtonAction:(id)sender;
- (IBAction)cancelUserButtonAction:(id)sender;

@end
