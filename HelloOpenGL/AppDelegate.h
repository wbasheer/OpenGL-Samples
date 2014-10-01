//
//  AppDelegate.h
//  HelloOpenGL
//
//  Created by Waleed Basheer on 9/30/14.
//  Copyright (c) 2014 Basheer Enterprises. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, retain) IBOutlet OpenGLView *glView;
@property (strong, nonatomic) UIWindow *window;


@end

