//
//  DTFUICustom.h
//  BioAuthEngine
//
//  Created by 汪澌哲 on 2024/1/10.
//  Copyright © 2024 Alipay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DTFUICustomProtocol.h"
#import "DTFCustomAlertView.h"
#import "DTFColorModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface DTFUICustom : NSObject<DTFUICustomProtocol>

@property (nonatomic, strong) id userCustomProtocol;
@property (nonatomic, strong) UIViewController *currentViewController;

- (void)showAlertViewWithTitle:(NSString *)title msg:(NSString *)msg type:(NSString *)type bizCode:(NSString *)bizCode actions:(NSArray <DTFCustomAlertAction *>*)actions;

- (BOOL)showPermissionViewWithPermission:(NSArray *)permission serviceType:(DTFServiceType)serviceType;

@end

NS_ASSUME_NONNULL_END
