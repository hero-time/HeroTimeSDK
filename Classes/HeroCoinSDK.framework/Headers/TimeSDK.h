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
 游戏注册后获得的渠道标识符
 */
@property (nonatomic, copy) NSString *gameId;

@property (nonatomic, copy) NSString *FacebookAppID;
@property (nonatomic, copy) NSString *FacebookSecret;
@property (nonatomic, copy) NSString *GoogleAppID;


/**
 * 登录
 */
+ (void)timeLogInResult:(void (^)(NSDictionary *info, NSError *error))reasult;



- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;


- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<NSString *, id> *)options;


- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;




/**
 *用户充值
 *
 * @param dollar 充值金额，等效为美元。格式为 "##,##0.00"
 */
+ (void)userTopUpWithDollar:(NSString *)dollar;

/**
 * 用户分享游戏
 */
+ (void)userShareApp;




@end
