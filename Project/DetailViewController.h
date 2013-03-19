//
//  DetailViewController.h
//  Project
//
//  Created by Salman Al-Humam on 3/19/13.
//  Copyright (c) 2013 Salman Al-Humam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
