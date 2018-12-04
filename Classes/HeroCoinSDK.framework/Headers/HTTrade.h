//
//  HTTrade.h
//  HeroCoinSDK
//
//  Created by 王章仲 on 2018/6/23.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TradeResuleStatus.h"

@class HTOrder;

/**
 * 支付类
 */
@interface HTTrade : NSObject

/**
 支付

 @param order 支付订单信息
 @param successful 支付成功回调
 @param failure 支付失败回调
 */
+ (void)tradeWithOrder:(HTOrder *)order
          successful:(TradeSuccessful)successful
             failure:(TradeFailure)failure;

@end


/**
 * 支付商品订单信息
 */
@interface HTOrder : NSObject

/**
 * 游戏必填
 * 订单编号
 */
@property (nonatomic,   copy) NSString *orderId;
/**
 * 游戏必填
 * 游戏服务器唯一标识
 */
@property (nonatomic,   copy) NSString *serverId;
/**
 * 游戏选填
 * 推送结果目标的游戏服务器地址
 */
@property (nonatomic,   copy) NSString *serverCallBackUrl;
/**
 * 游戏必填
 * 商品ID
 */
@property (nonatomic,   copy) NSString *productId;
/**
 * 订单创建时间
 * 毫秒级（长度13位有效数字）
 */
@property (nonatomic, assign) u_int64_t orderCreateDate;
/**
 * 商品名称
 */
@property (nonatomic,   copy) NSString *productName;
/**
 * 商品单价
 */
@property (nonatomic,   copy) NSDecimalNumber *productPrice;
/**
 * 商品结算币种
 * 格式为全部大写英文字母的字符串
 */
@property (nonatomic,   copy) NSString *productCurrency;
/**
 * 商品数量 正整数
 * 消耗型商品一个购买数量只能为1
 */
@property (nonatomic, assign) u_int32_t productNumber;
/**
 * 商品总价
 */
@property (nonatomic,   copy) NSDecimalNumber *productTotalPrice;
/**
 * 其他信息
 */
@property (nonatomic,   copy) NSDictionary *productOther;
/**
 * 游戏服务器输入什么，推送游戏服务器时就原样返回
 */
@property (nonatomic,   copy) NSString *orderAdditionalInfo;

/**
 * 游戏名称
 */
@property (nonatomic,   copy) NSString *gameName;
/**
 * 角色Id
 */
@property (nonatomic,   copy) NSString *roleId;
/**
 * 角色名称
 */
@property (nonatomic,   copy) NSString *roleName;


+ (instancetype)orderWithOrderId:(NSString *)orderId
                       productId:(NSString *)productId
                        serverId:(NSString *)serverId;


+ (instancetype)orderWithOrderId:(NSString *)orderId
                 orderCreateDate:(u_int64_t)orderCreateDate
                       productId:(NSString *)productId
                     productName:(NSString *)productName
                    productPrice:(NSDecimalNumber *)productPrice
                 productCurrency:(NSString *)productCurrency
                   productNumber:(u_int32_t)productNumber
               productTotalPrice:(NSDecimalNumber *)productTotalPrice
                    productOther:(NSDictionary *)productOther
             orderAdditionalInfo:(NSString *)orderAdditionalInfo
                        serverId:(NSString *)serverId
               serverCallBackUrl:(NSString *)serverCallBackUrl
                        gameName:(NSString *)gameName
                          roleId:(NSString *)roleId
                        roleName:(NSString *)roleName;



@end
