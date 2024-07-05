//
//  DetectImageForOCRInfoViewController.h
//  xMediaDemo
//
//  Created by 053508 on 2020/6/8.
//  Copyright © 2020 DTF. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BioAuthEngine/DTFUICustomProtocol.h>
#import <BioAuthEngine/DTFUICustom.h>


NS_ASSUME_NONNULL_BEGIN
typedef void(^DetectImageForOCRInfoBlock)(BOOL success, NSObject * _Nonnull result);



@class ZimRpcManager;
@interface DetectImageForOCRInfoViewController : UIViewController
@property (nonatomic, copy)DetectImageForOCRInfoBlock ocrInfoBlock;
@property(nonatomic, strong) ZimRpcManager * rpcManager;
@property (nonatomic,strong) NSString * certifyId;
@property(nonatomic, assign) BOOL isClose;
@property(nonatomic, strong) id<DTFUICustomProtocol> customProtocol;

@end

NS_ASSUME_NONNULL_END
