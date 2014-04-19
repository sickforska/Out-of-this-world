//
//  OWOuterSpaceTableViewController.h
//  Out of this world
//
//  Created by Cooper Richardson on 4/11/14.
//  Copyright (c) 2014 Cooper RIchardson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWAddSpaceObjectViewController.h"

@interface OWOuterSpaceTableViewController : UITableViewController <OWAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray * addedSpaceObjects;

@end
