//
//  AppDelegate.h
//  Bitrise-iTunesConnectBetaTest
//
//  Created by Viktor Benei on 2016. 12. 28..
//  Copyright © 2016. bitrise. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

