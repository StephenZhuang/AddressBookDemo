//
//  DetailViewController.h
//  AddressBookDemo
//
//  Created by Stephen Zhuang on 16/5/16.
//  Copyright © 2016年 StephenZhuang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

