//
//  AFEWebGuideView.h
//  BioAuthEngine
//
//  Created by yukun.tyk on 3/21/16.
//  Copyright © 2016 DTF. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BioAuthEngine/AFEStatusBar.h>
#import <WebKit/WebKit.h>
#import "APBToygerRemoteConfig.h"
#import "DTFUICustom.h"

@protocol AFEWebGuideViewDelegate <NSObject>

- (void)onButtonBegin:(BOOL)suitableType query:(NSDictionary *)dict;
- (void)onButtonCancel;

@optional
- (void)onLoadFinished:(BOOL)success;
- (void)onH5Logger:(NSString *)h5Logger;
- (void)onButtonAgreement;

@end

@interface AFEWebTopBar: UIView

@end

@interface AFEWebGuideView : UIView <IStatusBarDelegate,WKScriptMessageHandler, WKUIDelegate, WKNavigationDelegate>

@property(strong,nonatomic) WKWebView *wkwebView;

@property(nonatomic, assign)BOOL loaded;
@property(nonatomic, strong)APBToygerAlertConfig *toygerAlertConfig;
@property(nonatomic, strong)UIViewController *currentViewController;
@property(nonatomic, strong)DTFUICustom *customProtocol;
@property(nonatomic, strong)NSDictionary *alertParam;

- (void)setWebGuideViewDelegate:(id<AFEWebGuideViewDelegate>)webGuideViewDeleage;
- (void)setURL:(NSURL *)url;

@end
