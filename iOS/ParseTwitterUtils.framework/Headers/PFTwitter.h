//
//  PFTwitter.h
//  RooftopTwitterUtils
//
//  Created by Mac on 07.11.16.
//  Copyright © 2016 Rooftoptek. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class BFTask<__covariant BFGenericType>;

@interface PFTwitter : NSObject

/*
@property (strong, nonatomic) NSString *consumerSecret;
@property (strong, nonatomic) NSString *authToken;
@property (strong, nonatomic) NSString *authTokenSecret;
@property (strong, nonatomic) NSString *userId;
@property (strong, nonatomic) NSString *screenName;

+ (PFTwitter *)sharedInstance;
*/

- (instancetype)init;

/**
 Consumer key of the application that is used to authorize with Twitter.
 */
@property (nullable, nonatomic, copy) NSString *consumerKey;

/**
 Consumer secret of the application that is used to authorize with Twitter.
 */
@property (nullable, nonatomic, copy) NSString *consumerSecret;

/**
 Auth token for the current user.
 */
@property (nullable, nonatomic, copy) NSString *authToken;

/**
 Auth token secret for the current user.
 */
@property (nullable, nonatomic, copy) NSString *authTokenSecret;

/**
 Twitter user id of the currently signed in user.
 */
@property (nullable, nonatomic, copy) NSString *userId;

/**
 Twitter screen name of the currently signed in user.
 */
@property (nullable, nonatomic, copy) NSString *screenName;

/**
 Displays an auth dialog and populates the authToken, authTokenSecret, userId, and screenName properties
 if the Twitter user grants permission to the application.
 
 @return The task, that encapsulates the work being done.
 */
- (BFTask *)authorizeInBackground;

/**
 Invalidates an OAuth token for the current user, if the Twitter user has granted permission to the
 current application.
 
 @return The task, that encapsulates the work being done.
 */
- (BFTask *)deauthorizeInBackground;

/**
 Displays an auth dialog and populates the authToken, authTokenSecret, userId, and screenName properties
 if the Twitter user grants permission to the application.
 
 @param success Invoked upon successful authorization.
 @param failure Invoked upon an error occurring in the authorization process.
 @param cancel Invoked when the user cancels authorization.
 */
- (void)authorizeWithSuccess:(nullable void (^)(void))success
                     failure:(nullable void (^)(NSError *__nullable error))failure
                      cancel:(nullable void (^)(void))cancel;

/**
 Adds a 3-legged OAuth signature to an `NSMutableURLRequest` based
 upon the properties set for the Twitter object.
 
 Use this function to sign requests being made to the Twitter API.
 
 @param request Request to sign.
 */
- (void)signRequest:(nullable NSMutableURLRequest *)request;


@end

NS_ASSUME_NONNULL_END
