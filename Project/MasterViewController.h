//
//  MasterViewController.h
//  Project
//
//  Created by Salman Al-Humam on 3/19/13.
//  Copyright (c) 2013 Salman Al-Humam. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
