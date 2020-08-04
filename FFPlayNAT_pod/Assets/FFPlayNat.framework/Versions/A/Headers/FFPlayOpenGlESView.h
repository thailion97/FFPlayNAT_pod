//
//  MyView.h
//  OpenGL-PlayYUV
//
//  Created by Nguyen Anh Thai on 7/29/20.
//  Copyright © 2020 zhw. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FFPlayOpenGlESView : UIView

//data only supports YUV420
- (void)renderWithData:(unsigned char *)data width:(int)width height:(int)height;
- (void)reset;

@end

NS_ASSUME_NONNULL_END
