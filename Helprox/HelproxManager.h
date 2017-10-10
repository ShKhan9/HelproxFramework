//
//  HelproxMessenger.h
//  HelproxMessenger
//
//  Created by ShKhan on 10/3/17.
//  Copyright © 2017 Approcks. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "IdentifiedUser.h"
@interface HelproxMessenger : NSObject


/*!
 Initialize HelproxMessenger all questions to be asked to your user.
 
 @param questions all required questions needed.
 
 */
+ (void)setQuestions:(NSArray *)questions;


/*!
 Initialize HelproxMessenger with the indentified user
 
 @param identifiedUser the user to be registered .
 
 */
+ (void)registerIdentified:(IdentifiedUser *)identifiedUser;

/*!
 Initialize HelproxMessenger with the unindentified user
 
 */

+ (void)registerUnidentifiedUser;


/*!
   Log out current user.
 */
+ (void)unRegister;








@end
