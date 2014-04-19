//
//  OWSpaceDataViewController.h
//  Out of this world
//
//  Created by Cooper Richardson on 4/17/14.
//  Copyright (c) 2014 Cooper RIchardson. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
