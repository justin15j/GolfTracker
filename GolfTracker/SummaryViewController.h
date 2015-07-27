//
//  SummaryViewController.h
//  GolfTracker
//
//  Created by Justin Janda on 2015-07-21.
//  Copyright (c) 2015 Justin Janda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SummaryViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *courseParLabel;
@property (weak, nonatomic) IBOutlet UILabel *scoreLabel;

@property (nonatomic) NSMutableArray *parValues;
@property (nonatomic) NSMutableArray *strokeValues;

@end
