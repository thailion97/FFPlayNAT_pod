//
//  FFPlayXIBViewController.h
//  FFmpegDemo
//
//  Created by Nguyen Anh Thai on 7/30/20.
//  Copyright © 2020 zhw. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FFPlayXIBViewController : UIViewController

@property NSString *link;
+(instancetype) shareInstanceWithLink:(NSString *)link;

@end

NS_ASSUME_NONNULL_END
