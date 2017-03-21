//
//  PFUser+Digits.h
//
//  Created by Felix Dumit on 11/6/14.
//  Copyright (c) 2015 Felix. All rights reserved.


#import <Foundation/Foundation.h>
#import <Rooftop/Rooftop.h>

NS_ASSUME_NONNULL_BEGIN

@class DGTAuthenticationConfiguration;

@interface RTUser (Digits)

+ (void)enableDigitsLogin;

- (nullable NSString *)digitsId;
- (nullable NSString *)digitsEmail;
- (nullable NSString *)digitsPhone;

+ (void)loginWithDigitsInBackground:(void (^) (__kindof RTUser *, NSError *error))block;
+ (void)loginWithDigitsInBackgroundWithConfiguration:(nullable DGTAuthenticationConfiguration *)configuration completion:(void (^) (__kindof RTUser *, NSError *error))block;

+ (BFTask<__kindof RTUser *> *)loginWithDigitsInBackground;
+ (BFTask<__kindof RTUser *> *)loginWithDigitsInBackgroundWithConfiguration:(nullable DGTAuthenticationConfiguration *)configuration;

- (void)linkWithDigitsInBackground:(void (^) (BOOL succeeded, NSError *error))block;

- (void)linkWithDigitsInBackgroundWithConfiguration:(nullable DGTAuthenticationConfiguration *)configuration completion:(void (^) (BOOL succeeded, NSError *error))block;

- (BFTask<NSNumber *> *)linkWithDigitsInBackground;
- (BFTask<NSNumber *> *)linkWithDigitsInBackgroundWithConfiguration:(nullable DGTAuthenticationConfiguration *)configuration;
- (BFTask<NSNumber *> *)unlinkWithDigits;

- (BOOL)isLinkedWithDigits;


@end

NS_ASSUME_NONNULL_END
