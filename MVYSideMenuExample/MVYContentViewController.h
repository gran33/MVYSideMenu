//
//  MVYContentViewController.h
//  MVYSideMenuExample
//
//  Created by Álvaro Murillo del Puerto on 10/07/13.
//  Copyright (c) 2013 Mobivery. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MVYContentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *bg;

- (IBAction)openMenu:(id)sender;

- (UIImage *)applyBlurOnImage: (UIImage *)imageToBlur
                   withRadius: (CGFloat)blurRadius;

@end
