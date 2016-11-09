/**
 * Copyright (c) 2016-present, RFTP Technologies Ltd.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <Parse/PFConstants.h>
#import <Parse/PFUser.h>

#import "PFTwitter.h"


@class BFTask<__covariant BFGenericType>;
@class PF_Twitter;

NS_ASSUME_NONNULL_BEGIN

@interface PFTwitterUtils : NSObject 


+ (void)login;

+ (void)logInWithBlock:(nullable PFUserResultBlock)block;

+ (void)initializeWithConsumerKey:(NSString *)consumerKey consumerSecret:(NSString *)consumerSecret;

+ (BOOL)isLinkedWithUser:(nullable PFUser *)user;

+ (BFTask<PFUser *> *)logInWithTwitterIdInBackground:(NSString *)twitterId screenName:(NSString *)screenName authToken:(NSString *)authToken authTokenSecret:(NSString *)authTokenSecret;

+ (void)logInWithTwitterId:(NSString *)twitterId screenName:(NSString *)screenName authToken:(NSString *)authToken authTokenSecret:(NSString *)authTokenSecret block:(nullable PFUserResultBlock)block;

@end

NS_ASSUME_NONNULL_END
