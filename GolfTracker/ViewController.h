//
//  ViewController.h
//  GolfTracker
//
//  Created by Justin Janda on 2015-07-21.
//  Copyright (c) 2015 Justin Janda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *holeNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *strokeLabel;
@property (weak, nonatomic) IBOutlet UIStepper *strokeStepper;
@property (weak, nonatomic) IBOutlet UISegmentedControl *parSegmenetedControl;
@property (weak, nonatomic) IBOutlet UIButton *doneGolfingButton;

- (IBAction)nextHoleButtonClick:(UIButton *)sender;
- (IBAction)strokeValueChanged:(UIStepper *)sender;


@end

