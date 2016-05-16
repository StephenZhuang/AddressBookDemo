//
//  MasterViewController.h
//  AddressBookDemo
//
//  Created by Stephen Zhuang on 16/5/16.
//  Copyright © 2016年 StephenZhuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@class ZXPersonTemp;

@interface ZXPersonTemp : NSObject
@property (nonatomic , copy) NSString *phone;
@property (nonatomic , copy) NSString *name;
@end

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (nonatomic , strong) NSMutableArray *addressBookArray;
@end

