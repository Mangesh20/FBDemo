//
//  AppDelegate.h
//  FBDemo
//
//  Created by Mangesh Tekale on 05/01/15.
//  Copyright (c) 2015 ComedyMob. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)sessionStateChanged:(FBSession*)session  state:(FBSessionState)state error:(NSError*)error;
@end

