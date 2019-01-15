//
//  TimeSDK.h
//  HeroCoinSDK
//
//  Created by admin on 2018/5/9.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@class UIApplication;


typedef NS_ENUM(NSUInteger, EnvironmentType) {
    EnvironmentTypeWithTest,            //测试环境
    EnvironmentTypeWithPre_production,  //预生产环境
    EnvironmentTypeWithProduction,      //生产环境
};

typedef void (^LoginResult)(NSDictionary *info, NSError *error);
typedef void (^LogoutResult)(BOOL success);

@interface TimeSDK : NSObject

/**
 单利初始化入口
 */
+ (instancetype)sharedInstance;

/**
 游戏注册后获得的 渠道标识符
 */
@property (nonatomic, copy) NSString *productId;
/**
 游戏注册后获得的 包体标识符
 */
@property (nonatomic, copy) NSString *projectId;
/**
 * SDK环境，对接不同服务器，默认为测试环境
 */
@property (nonatomic, assign) EnvironmentType environmentType;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<NSString *, id> *)options;

- (BOOL)application:(UIApplication *)application
            openURL:(NSURL *)url
  sourceApplication:(NSString *)sourceApplication
         annotation:(id)annotation;

+ (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window portrait:(NSUInteger)portrait;

/**
 * 显示Time图标（time UI入口）
 */
- (void)showTimeIcon;

/**
 * 影藏Time图标（time UI入口）
 */
- (void)hiddenTimeIcon;

/**
 * 登录
 */
- (void)loginTime;

/**
 * 切换账号（主动调用退出，并调出登录UI页面）
 */
- (void)switchAccount;

/**
 * 退出账号（主动调用退出，并返回是否退出成功）
 */
- (void)logoutAccount;

/**
 * 退出账号 (当程序中有退出登录/切换账号操作时回调)
 */
@property (nonatomic,   copy) LogoutResult logoutResult;
/**
 * 登录/切换账号 结果回调
 */
@property (nonatomic,   copy) LoginResult loginResult;


/**
 * 用户分享游戏（给用户记录分享贡献度）
 */
+ (void)userShareApp;

/**
 timeSDK 版本
 */
@property (nonatomic, copy, readonly) NSString *timeSDKVersion;

/**
 游戏断线标记，默认没断线
 */
@property (nonatomic,assign,)BOOL isOffLine;

@end
