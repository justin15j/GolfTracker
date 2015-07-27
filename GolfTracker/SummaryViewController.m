//
//  SummaryViewController.m
//  GolfTracker
//
//  Created by Justin Janda on 2015-07-21.
//  Copyright (c) 2015 Justin Janda. All rights reserved.
//

#import "SummaryViewController.h"
#import "ViewController.h"

@interface SummaryViewController ()

@end

@implementation SummaryViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    int coursePar = 0;
    int totalStrokes = 0;
    
    for (int i = 0; i < self.parValues.count; ++i) {
        coursePar += [[self.parValues objectAtIndex:i] intValue];
        totalStrokes += [[self.strokeValues objectAtIndex:i] intValue];
    }
    
    self.courseParLabel.text = [NSString stringWithFormat:@"%i", coursePar];
    self.scoreLabel.text = [NSString stringWithFormat:@"%i", totalStrokes];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
