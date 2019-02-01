//
//  AppDelegate.h
//  elsevier-json
//
//  Created by Andrew McLernan on 01/02/2019.
//  Copyright © 2019 andymc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

