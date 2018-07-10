//
//  TimeSDK.h
//  HeroCoinSDK
//
//  Created by admin on 2018/5/9.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UIApplication;

@interface TimeSDK : NSObject

/**
 单利初始化入口
 */
+ (instancetype)sharedInstance;

/**
 timeSDK 版本
 */
@property (nonatomic, copy, readonly) NSString *timeSDKVersion;

/**
 游戏注册后获得的渠道标识符
 */
@property (nonatomic, copy) NSString *productId;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;


- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<NSString *, id> *)options;


- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;


/**
 * google GoogleClientID
 */
@property (nonatomic, copy) NSString *GoogleClientID;

/**
 * 登录
 */
+ (void)timeLogInResult:(void (^)(NSDictionary *info, NSError *error))reasult;

/**
 * 显示Time图标（time UI入口）
 */
- (void)showTimeIcon;

/**
 * 退出登录
 */
@property (nonatomic,   copy) dispatch_block_t logOut;

/**
 * 用户分享游戏
 */
+ (void)userShareApp;




@end
