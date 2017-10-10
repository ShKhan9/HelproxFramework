//
//  HROUserAttributes.h
//  Helprox
//
//  Created by ShKhan on 10/4/17.
//  Copyright © 2017 Approcks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IdentifiedUser : NSObject

/**
 The ICMUserAttributes object is used for updating a user in Intercom.
 All of the default attributes you can modify are available as properties on ICMUserAttributes.
 This is an example of how to create an ICMUserAttributes object to update default attributes
 
 ICMUserAttributes *userAttributes = [ICMUserAttributes new];
 userAttributes.Id = @"12345";
 userAttributes.email = @"test@email.com";
 userAttributes.firstName = @"Andy";
 userAttributes.firstName = @"Rymond";
 */


/**
 The email for this user.
 */
@property (nonatomic, copy, nullable) NSString *email;

/**
 The user ID for this user.
 */
@property (nonatomic, copy, nullable) NSString *Id;

/**
 The first name of this user.
 */
@property (nonatomic, copy, nullable) NSString *firstName;

/**
 The last name of this user.
 */
@property (nonatomic, copy, nullable) NSString *lastName;


/**
 The phone number of this user.
 */
@property (nonatomic, copy, nullable) NSString *phone;

/**
 The language override code for this user.
 
 @note languageOverride must be a valid language code. For more information see [here](https://docs.intercom.com/configure-intercom-for-your-product-or-site/customize-the-intercom-messenger/localize-intercom-to-work-with-multiple-languages ).
 */
@property (nonatomic, copy, nullable) NSString *languageOverride;









@end
