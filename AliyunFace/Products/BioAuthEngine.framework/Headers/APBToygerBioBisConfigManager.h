//
//  APBioBisConfigManager.h
//  APFaceDetectBiz
//
//  Created by 晗羽 on 1/7/16.
//  Copyright © 2016 DTF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "APBToygerRemoteConfig.h"

@interface APBToygerBioBisConfigManager : NSObject
/**
 *  初始化biscfg
 *
 *  @param biscfg pb／json格式
 *
 *  @return 生成一个配置对象
 */
- (instancetype)initWithBisConfig:(NSString *)biscfg;

- (instancetype)initWithBisDocConfig:(NSString *)biscfg;
/**
 *  bisToken
 *
 *  @return 服务端下放的bistoken，每次人脸识别服务端的ID
 */
- (NSString * )bisToken;

- (NSString * )ioscfg;

- (NSString * )iosvoicecfg;

- (APBToygerSoluCfg *)solucfg;

- (APBToygerRemoteConfig *)bisConfig;

- (int) sampleMode;

- (BOOL) isLogin;

- (NSString *) apBioSecPublicKey;

+ (NSDictionary *)getDictfrom:(NSString *) jsonStr;
@end
