//
//  InsertManager.h
//  InsertDynamicFram
//
//  Created by ShKhan on 10/2/17.
//  Copyright © 2017 Approcks. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface InsertManager : NSObject

+(instancetype) sharedManager;

-(void) startManager;
-(void) stopManager;

-(void) showMessageInViewController:(UIViewController *)viewController;

-(BOOL) isManagerRunning;

@end
