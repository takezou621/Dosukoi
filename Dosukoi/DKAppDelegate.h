//
//  DKAppDelegate.h
//  Dosukoi
//
//  Created by Takeshi Kawai on 12/01/15.
//  Copyright (c) 2012年 None. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FBConnect.h"

@interface DKAppDelegate : UIResponder <UIApplicationDelegate,FBSessionDelegate>
{
    Facebook    *facebook;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,retain)Facebook    *facebook;

@end
