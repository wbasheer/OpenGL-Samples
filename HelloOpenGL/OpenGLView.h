//
//  OpenGLView.h
//  HelloOpenGL
//
//  Created by Waleed Basheer on 9/30/14.
//  Copyright (c) 2014 Basheer Enterprises. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView

@property(nonatomic, readwrite) CAEAGLLayer *eaglLayer;
@property(nonatomic, readwrite) EAGLContext *context;
@property(nonatomic, readwrite) GLuint colorRenderBuffer;




@end
