//
//  XYZPhoto.h
//  demo6_PhotoRiver
//
//  Created by BOBO on 15/3/23.
//  Copyright (c) 2015年 BobooO. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XYZDrawView.h"

//图片显示的状态
typedef NS_ENUM(NSInteger, XYZPhotoState) {
    XYZPhotoStateNormal, //流动状态
    XYZPhotoStateBig, //放大显示状态
    XYZPhotoStateDraw, //显示图片背面的绘图view状态
    XYZPhotoStateTogether //聚合显示状态（9宫格）
};

@interface XYZPhoto : UIView
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) XYZDrawView *drawView;
@property (nonatomic) float speed;
@property (nonatomic) CGRect oldFrame;
@property (nonatomic) float oldSpeed;
@property (nonatomic) float oldAlpha;
@property (nonatomic) int state;

- (void)updateImage:(UIImage *)image;
- (void)setImageAlphaAndSpeedAndSize:(float)alpha;
@end
