//
//  AFECircularView.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 01/11/2016.
//  Copyright © 2016 DTF. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BioAuthEngine/AFEScanViewDelegate.h>
#import "DTFTextLayer.h"
#import "AFECircleProgressBar.h"
#import "DTFUIElementManager.h"
#import "DTFUploadWaveLayer.h"

@class AFEStatusBar, AFECircleProgressBar, APBBlurView;

@protocol AFECircularViewProtocol <NSObject>

- (void)onStopScan;

@optional
- (void)playBtn:(UIButton *)btn;

@end

@interface AFECircularView : UIView<AFEScanViewProtocol>

@property (strong, nonatomic) AFEStatusBar *statusBar;
@property (nonatomic, strong) CALayer *compactLayer;
@property (nonatomic, strong) CALayer *cameraLayer;
@property (nonatomic, assign) float cameraStartY;
@property (nonatomic, assign) float cameraEndY;
@property (nonatomic, assign) BOOL isWish;
@property (nonatomic, strong) DTFTextLayer *bottomTipLayer;
@property (nonatomic, strong) DTFTextLayer *tipLayer;
@property (nonatomic, strong) CALayer *tipBackgroundLayer;
@property (nonatomic, strong) DTFTextLayer *powerByLayer;
@property (nonatomic, strong) AFECircleProgressBar *progressBar;
@property (nonatomic, strong) DTFUploadWaveLayer *waveLayer;
@property (nonatomic, strong) DTFTextLayer * stopScanTipLayer;
@property (nonatomic, weak) id<AFECircularViewProtocol> aFECirViewDelegate;
@property (nonatomic, strong) UIButton * stopScanTipButton;
@property (nonatomic, assign) double widthCoefficient;
@property (nonatomic, copy) NSDictionary *bottomTipAttrDict;
@property (nonatomic, copy) NSDictionary *tipAttrDict;

- (void)showPercent:(CGFloat)stage;
- (void)showtip:(NSString *)tip;
- (void)showBottomTip:(NSString *)bottomTip;
- (void)addCameraPreviewLayer:(CALayer *)cameraPreviewLayer;
- (void)powerByLayerHidden:(BOOL)hidden;
- (void)setBottomTipHidden:(BOOL)hidden;
- (void)setScreenRotation:(BOOL)isRotation;
- (void)setPlayBtnIcon:(NSString *)platformInfo;

- (void)setStopScanButtonHidden:(BOOL)hidden;
- (void)setMaskImage:(UIImage *)bestImage;
- (void)startWave;
- (void)stopWave;
- (void)setAFECirViewDelegate:(id<AFECircularViewProtocol>)delegate;
- (void)showBrandTip:(NSString *)brandTip;
- (void)showStopScanTip:(NSString *)stopScanTip;
- (void)hideViewList;
- (void)showViewList;

- (void)_updateView;

@end

