//
//  AppDelegate.h
//  GP5120
//
//  Created by lele126 on 14-8-2.
//  Copyright (c) 2014年 com.lexindasoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "HomeViewController.h"

#import "BMapKit.h"

#import "LoginAndRegisterViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,BMKGeneralDelegate>

@property (strong, nonatomic) UIWindow *window;

@property(strong,nonatomic)UINavigationController *_navigationController;

@property(strong,nonatomic)HomeViewController *_homeViewController;

@property(strong,nonatomic)BMKMapManager *_mapManager;

@end
