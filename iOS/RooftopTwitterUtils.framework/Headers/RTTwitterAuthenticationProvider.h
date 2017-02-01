/**
 * Copyright (c) 2015-present, Rooftop, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <Rooftop/RTUserAuthenticationDelegate.h>

@class BFTask<__covariant BFGenericType>;
@class RTTwitter;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const AWSIdentityProviderTwitter;

@interface RTTwitterAuthenticationProvider : NSObject <RTUserAuthenticationDelegate>

@property (nonatomic, strong, readonly) RTTwitter *twitter;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithTwitter:(RTTwitter *)twitter NS_DESIGNATED_INITIALIZER;
+ (instancetype)providerWithTwitter:(RTTwitter *)twitter;

- (BFTask *)authenticateAsync;

- (NSDictionary *)authDataWithTwitterId:(NSString *)twitterId
                             screenName:(NSString *)screenName
                              authToken:(NSString *)authToken
                                 secret:(NSString *)authTokenSecret
                            accessToken:(NSString *)accessToken;

@end

NS_ASSUME_NONNULL_END
