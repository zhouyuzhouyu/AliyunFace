//
//  DTFLanguageCustomConfig.h
//  DTFUtility
//
//  Created by 汪澌哲 on 2024/1/8.
//  Copyright © 2024 com.alipay.iphoneclient.zoloz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface DTFLanguageCustomGuideConfig : NSObject

@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) NSString *agrtTopTipsText;
@property (nonatomic, copy) NSString *agrtAgreeText;
@property (nonatomic, copy) NSString *agrtText;
@property (nonatomic, copy) NSString *agrtBotTipsText;
@property (nonatomic, copy) NSString *startBtnText;
@property (nonatomic, copy) NSString *elderBtnText;
@property (nonatomic, copy) NSString *exitBtnText;
@property (nonatomic, copy) NSString *rareFormNameText;
@property (nonatomic, copy) NSString *rareFormIDText;
@property (nonatomic, copy) NSString *rareFormEntBtnText;
@property (nonatomic, copy) NSString *authPermissionCamera;
@property (nonatomic, copy) NSString *authPermissionAudio;
@property (nonatomic, copy) NSString *authPermissionScreenEvidence;
@property (nonatomic, copy) NSString *authPermissionToastTitle;
@property (nonatomic, copy) NSString *authPermissionToastMsg;
@property (nonatomic, copy) NSString *authPermissionAPPName;
@property (nonatomic, copy) NSString *authPermissionSDKName;
@property (nonatomic, copy) NSString *dialogExitTitle;
@property (nonatomic, copy) NSString *dialogExitMsg;
@property (nonatomic, copy) NSString *dialogExitConfirm;
@property (nonatomic, copy) NSString *dialogExitCancel;
@property (nonatomic, copy) NSString *dialogPermissionFailedTitle;
@property (nonatomic, copy) NSString *dialogPermissionFailedMsg;
@property (nonatomic, copy) NSString *dialogPermissionFailedConfirm;
@property (nonatomic, copy) NSString *dialogPermissionFailedCancel;
@property (nonatomic, copy) NSString *dialogNetworkFailedTitle;
@property (nonatomic, copy) NSString *dialogNetworkFailedMsg;
@property (nonatomic, copy) NSString *dialogNetworkFailedConfirm;
@property (nonatomic, copy) NSString *dialogSupportFailedTitle;
@property (nonatomic, copy) NSString *dialogSupportFailedMsg;
@property (nonatomic, copy) NSString *dialogSupportFailedConfirm;
@property (nonatomic, copy) NSString *settingFailReason;
@property (nonatomic, copy) NSDictionary *originMap;

@end

@interface DTFLanguageCustomFaceConfig : NSObject

@property (nonatomic, copy) NSString *faceNotFound;
@property (nonatomic, copy) NSString *faceTooFar;
@property (nonatomic, copy) NSString *faceTooClose;
@property (nonatomic, copy) NSString *faceNotIn;
@property (nonatomic, copy) NSString *badPitch;
@property (nonatomic, copy) NSString *badYaw;
@property (nonatomic, copy) NSString *faceTooMore;
@property (nonatomic, copy) NSString *faceIsMoving;
@property (nonatomic, copy) NSString *faceBrightless;
@property (nonatomic, copy) NSString *faceBadQuality;
@property (nonatomic, copy) NSString *eyesOnScreen;
@property (nonatomic, copy) NSString *blink;
@property (nonatomic, copy) NSString *leftYaw;
@property (nonatomic, copy) NSString *rightYaw;
@property (nonatomic, copy) NSString *stackTime;
@property (nonatomic, copy) NSString *isBlur;
@property (nonatomic, copy) NSString *faceInitTxt;
@property (nonatomic, copy) NSString *faceTitleBlink;
@property (nonatomic, copy) NSString *leftYawLiveness;
@property (nonatomic, copy) NSString *rightYawLiveness;
@property (nonatomic, copy) NSString *photinusCommTips;
@property (nonatomic, copy) NSString *processing;
@property (nonatomic, copy) NSString *dialogTimeOutTitle;
@property (nonatomic, copy) NSString *dialogTimeOutMsg;
@property (nonatomic, copy) NSString *dialogTimeOutConfirm;
@property (nonatomic, copy) NSString *dialogInterruptTitle;
@property (nonatomic, copy) NSString *dialogInterruptConfirm;
@property (nonatomic, copy) NSString *dialogInterruptCancel;
@property (nonatomic, copy) NSString *dialogTooManyRetriesTitle;
@property (nonatomic, copy) NSString *dialogTooManyRetriesMsg;
@property (nonatomic, copy) NSString *dialogTooManyRetriesConfirm;
@property (nonatomic, copy) NSString *dialogExitTitle;
@property (nonatomic, copy) NSString *dialogExitMsg;
@property (nonatomic, copy) NSString *dialogExitConfirm;
@property (nonatomic, copy) NSString *dialogExitCancel;
@property (nonatomic, copy) NSString *dialogCamOpenFailedTitle;
@property (nonatomic, copy) NSString *dialogCamOpenFailedMsg;
@property (nonatomic, copy) NSString *dialogCamOpenFailedCancel;
@property (nonatomic, copy) NSString *dialogCamOpenFailedConfirm;
@property (nonatomic, copy) NSString *dialogArchSysFailedTitle;
@property (nonatomic, copy) NSString *dialogArchSysFailedMsg;
@property (nonatomic, copy) NSString *dialogArchSysFailedConfirm;
@property (nonatomic, copy) NSString *dialogSDKErrTitle;
@property (nonatomic, copy) NSString *dialogSDKErrMsg;
@property (nonatomic, copy) NSString *dialogSDKErrConfirm;
@property (nonatomic, copy) NSString *dialogNetworkFailedTitle;
@property (nonatomic, copy) NSString *dialogNetworkFailedMsg;
@property (nonatomic, copy) NSString *dialogNetworkFailedConfirm;
@property (nonatomic, copy) NSString *settingFailReason;
@property (nonatomic, copy) NSString *verifyNotice;


@end

@interface DTFLanguageCustomConfig : NSObject
@property (strong, nonatomic) DTFLanguageCustomGuideConfig *guideConfig;
@property (strong, nonatomic) DTFLanguageCustomFaceConfig *faceConfig;
@property (strong, nonatomic) NSDictionary *docConfig;

- (instancetype)initWithString:(NSString *)string type:(NSString *)type error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
