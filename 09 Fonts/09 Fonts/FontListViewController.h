//
//  FontListViewController.h
//  09 Fonts
//
//  Created by tomandhua on 16/7/3.
//  Copyright © 2016年 tomandhua. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FontListViewController : UITableViewController

@property (copy, nonatomic) NSArray * fontNames;
@property (assign, nonatomic) BOOL showsFavorites;

@end
