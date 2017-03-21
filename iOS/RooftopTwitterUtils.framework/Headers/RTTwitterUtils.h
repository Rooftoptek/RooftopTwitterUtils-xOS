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
#import <Rooftop/RTConstants.h>
#import <Rooftop/RTUser.h>

#import "RTTwitter.h"


@class BFTask<__covariant BFGenericType>;
@class RT_Twitter;

NS_ASSUME_NONNULL_BEGIN

@interface RTTwitterUtils : NSObject 

+ (BOOL)isLinkedWithUser:(nullable RTUser *)user;

+ (void)initializeWithConsumerKey:(NSString *)consumerKey consumerSecret:(NSString *)consumerSecret;

+ (void)loginWithCompletion:(void (^)(BOOL success))completionBlock;

+ (BFTask<RTUser *> *)logInWithTwitterIdInBackground:(NSString *)twitterId screenName:(NSString *)screenName authToken:(NSString *)authToken authTokenSecret:(NSString *)authTokenSecret;

+ (void)logInWithTwitterId:(NSString *)twitterId screenName:(NSString *)screenName authToken:(NSString *)authToken authTokenSecret:(NSString *)authTokenSecret block:(nullable RTUserResultBlock)block;

@end

NS_ASSUME_NONNULL_END
