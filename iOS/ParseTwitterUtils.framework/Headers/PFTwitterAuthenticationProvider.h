/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <Rooftop/PFUserAuthenticationDelegate.h>

@class BFTask<__covariant BFGenericType>;
@class PFTwitter;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const AWSIdentityProviderTwitter;

@interface PFTwitterAuthenticationProvider : NSObject <PFUserAuthenticationDelegate>

@property (nonatomic, strong, readonly) PFTwitter *twitter;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithTwitter:(PFTwitter *)twitter NS_DESIGNATED_INITIALIZER;
+ (instancetype)providerWithTwitter:(PFTwitter *)twitter;

- (BFTask *)authenticateAsync;

- (NSDictionary *)authDataWithTwitterId:(NSString *)twitterId
                             screenName:(NSString *)screenName
                              authToken:(NSString *)authToken
                                 secret:(NSString *)authTokenSecret
                            accessToken:(NSString *)accessToken;

@end

NS_ASSUME_NONNULL_END
