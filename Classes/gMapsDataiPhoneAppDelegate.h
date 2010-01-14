//
//  gMapsDataiPhoneAppDelegate.h
//  gMapsDataiPhone
//
//  Created by Bruno Conti on 09/07/09.
//  Copyright Bruno Conti 2009. All rights reserved.
//

@interface gMapsDataiPhoneAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

