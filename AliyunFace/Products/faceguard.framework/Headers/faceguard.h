//
//  faceguard.h
//  faceguard
//
//  Created by Lingxuan on 2023/6/27.
//  Copyright © 2023 security.net. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <faceguard/FaceGuardSession.h>

//! Project version number for faceguard.
FOUNDATION_EXPORT double faceguardVersionNumber;

//! Project version string for faceguard.
FOUNDATION_EXPORT const unsigned char faceguardVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <faceguard/PublicHeader.h>


@interface FaceGuardDevice 

/**
 * 设备指纹单例
 */
+ (FaceGuardDevice *)sharedInstance;

/**
 *  设备指纹初始化函数
 */
- (void)initFG:(NSString *)userAppKey :(void (^)(int))initCallback;

/**
 * 底层数据传输走IPv6
 */
- (void)initFGIPV6:(NSString *)userAppKey :(void (^)(int))initCallback;

// 带参数的初始化
- (void)initFG:(NSString *)userAppKey withOptions:(NSMutableDictionary *)options callback: (void (^)(int))initCallback;

/**
 * 获取DeviceToken
 */
- (FaceGuardSession *) getSession;
- (FaceGuardSessionId *)getSessionId;
- (FaceGuardToken *) getDeviceToken;

/**
 * 用户自定义上报数据
 */
- (void)reportUserData:(int)type :(NSString *)msg;

/**
 * 在某些特殊时机上报，具体上报时机请联系 对接人员咨询
 */
- (void)reportMoment;

// 获取 SDK 版本号
- (NSString *) getVersion;

@end
